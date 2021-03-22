/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:00 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 18:04:18 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

ClapTrap::ClapTrap() : _name("Basic CLP-TP Unit"), _type("CLP-TP") {
	_hp = 10;
	_maxHp = 10;
	_ep = 0;
	_maxEp = 0;
	_lvl = 1;
	_meleeDmg = 0;
	_rangeDmg = 0;
	_armor = 0;
	std::cout << "[" << _name << "]: Boring, basic Claptrap coming out of the factory, hopefully I have a bright future!" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : _name("Basic CLP-TP Unit") {
	std::cout << " _-_-- Claptrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout << "[" << _name << "]: Destroying CLP-TP boring shell... *pouf*" << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "Copying " << rhs._name << "'s data into " << _name << std::endl;
	_name = rhs._name;
	_type = rhs._type;
	_hp = rhs._hp;
	_maxHp = rhs._maxHp;
	_ep = rhs._ep;
	_maxEp = rhs._maxEp;
	_lvl = rhs._lvl;
	_meleeDmg = rhs._meleeDmg;
	_rangeDmg = rhs._rangeDmg;
	_armor = rhs._armor;
	return (*this);
}

void		ClapTrap::rangedAttack(std::string const &target) const {
	std::cout << _type << " " << _name << " attacks " << target << " at range, ";
	std::cout << "causing " << _rangeDmg << " points of damage!" << std::endl;
	return;
}

void		ClapTrap::meleeAttack(std::string const &target) const {
	std::cout << _type << " " << _name << " melee attacks " << target << ", ";
	std::cout << "causing " << _meleeDmg << " points of damage!" << std::endl;
	return;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	unsigned int realDmg;

	realDmg = (amount > _armor) ? (amount - _armor) : 0;
	_hp = (realDmg < _hp) ? (_hp - realDmg) : 0;

	std::cout << _type << " " << _name << " takes " << amount << " damage points, ";
	std::cout << "leaving them with " << _hp << " HP points!" << std::endl;
	return;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (amount >= _maxHp - _hp) // safety in case of (_hp + amount) overflow
		_hp = _maxHp;
	else
		_hp = ((_hp + amount) < _maxHp) ? (_hp + amount) : _maxHp;

	std::cout << _type << " " << _name << " gets a repair worth " << amount << " HP points, ";
	std::cout << "leaving them with " << _hp << " HP points!" << std::endl;
	return;
}
