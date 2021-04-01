/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:00:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 17:30:44 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>
#include <iostream>

Squad::Squad() : _unitCount(0), _units(NULL) {
	return;
}

Squad::Squad(Squad const &copy) : _unitCount(0), _units(NULL) {
	*this = copy;
	return;
}

Squad::~Squad() {
	t_unitList *tmp;

	tmp = _units;
	while (tmp)
	{
		tmp = _units->next;
		delete _units->marine;
		delete _units;
		_units = tmp;
	}
	return;
}

Squad			&Squad::operator=(Squad const &rhs) {
	if (this == &rhs)
		return (*this);
	
	t_unitList *tmp;

	tmp = _units;
	while (tmp)
	{
		tmp = _units->next;
		delete _units->marine;
		delete _units;
		_units = tmp;
	}
	_unitCount = 0;

	tmp = rhs._units;
	while (tmp)
	{
		push(tmp->marine->clone());
		tmp = tmp->next;
	}

	return (*this);
}

int		Squad::getCount() const {
	return (_unitCount);
}

ISpaceMarine	*Squad::getUnit(int pos) const {
	if (pos < 0 || pos >= _unitCount)
		return (NULL);

	t_unitList	*tmp;

	tmp = _units;
	while (pos--)
	{
		tmp = tmp->next;
	}

	return (tmp->marine);
}

int				Squad::push(ISpaceMarine *marine) {
	if (!marine)
	{
		std::cout << "Error: We don't accept NULL marines in this squad, rookie!" << std::endl;
		return (-1);
	}
	if (!_units)
	{
		_units = new t_unitList;
		_units->marine = marine;
		_units->next = NULL;
		return (++_unitCount);
	}

	t_unitList	*tmp;

	tmp = _units;
	while (42)
	{
		if (tmp->marine == marine)
		{
			std::cout << "Error: We don't accept duplicate marines in this squad, rookie!" << std::endl;
			return (-1);
		}
		else if (tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	tmp->next = new t_unitList;
	tmp = tmp->next;
	tmp->marine = marine;
	tmp->next = NULL;

	return (++_unitCount);
}
