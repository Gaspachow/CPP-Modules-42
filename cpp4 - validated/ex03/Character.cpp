/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:57:42 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 21:21:09 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return;
}

Character::Character(Character const &copy) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = copy;
	return;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	return;
}

Character			&Character::operator=(Character const &rhs) { 
	int i;
	for (i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}

	for (i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
	}
	_name = rhs._name;
	return (*this);
}

std::string	 const	&Character::getName() const {
	return (_name);
}

void				Character::equip(AMateria *m) {
	if (!m)
		return;

	int i;

	for (i = 0; i < 4 && _inventory[i]; i++);
	if (i < 4)
		_inventory[i] = m;
	return;
}

void				Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx] = NULL;
	return;
}

void				Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx]->use(target);
	return;
}
