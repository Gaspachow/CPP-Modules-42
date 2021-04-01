/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:11:27 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 16:49:39 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL) {
	return;
}

Character::Character(Character const &copy) {
	*this = copy;
	return;
}

Character::~Character() {
	return;
}

Character		&Character::operator=(Character const &rhs) {
	_name = rhs._name;
	_ap = rhs._ap;
	_weapon = rhs._weapon;
	return (*this);
}

void			Character::recoverAP() {
	if (_ap < 30)
		_ap += 10;
	else
		_ap = 40;
	return;
}

void			Character::equip(AWeapon *newWeapon) {
	_weapon = newWeapon;
	return;
}

void			Character::attack(Enemy *target) {
	if (!target)
	{
		std::cout << _name << " wants to attack the NULL pointer but a Guardian of Segfaults appears out of nowhere and explodes their head..." << std::endl;
		return;
	}
	else if (!_weapon)
	{
		std::cout << _name << " wants to attack a " << target->getType() << " but they don't have a weapon..." << std::endl;
		return;
	}
	else if (_ap < _weapon->getAPCost())
	{
		std::cout << _name << " wants to attack a " << target->getType() << " but doesn't have enough AP to use their " << _weapon->getName() << "." << std::endl;
		return;
	}
	else
	{
		std::cout << _name << " attacks " << target->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		target->takeDamage(_weapon->getDamage());
		if (!target->getHP())
			delete target;
	}
	return;
}

std::string		Character::getName() const {
	return (_name);
}

int				Character::getAP() const {
	return (_ap);
}

AWeapon			*Character::getWeapon() const {
	return (_weapon);
}

std::ostream	&operator<<(std::ostream &o, Character const &rhs) {
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() <<  "AP and is unarmed" << std::endl;	
	return (o);
}
