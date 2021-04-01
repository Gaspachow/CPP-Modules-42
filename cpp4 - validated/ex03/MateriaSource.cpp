/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:21:21 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 20:35:02 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <string>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_sources[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {
	*this = copy;
	return;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete _sources[i];
	return;
}

MateriaSource			&MateriaSource::operator=(MateriaSource const &rhs) { 
	int i;
	for (i = 0; i < 4; i++)
	{
		delete _sources[i];
		_sources[i] = NULL;
	}

	for (i = 0; i < 4; i++)
	{
		if (rhs._sources[i])
			_sources[i] = rhs._sources[i]->clone();
	}

	return (*this);
}

void				MateriaSource::learnMateria(AMateria *m) {
	if (!m)
		return;

	int i;

	for (i = 0; i < 4 && _sources[i]; i++);
	if (i < 4)
		_sources[i] = m;
	return;
}

AMateria			*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4 ; i++)
	{
		if (_sources[i] && _sources[i]->getType() == type)
			return(_sources[i]->clone());
	}

	return (0);
}
