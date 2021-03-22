/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:04:27 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 16:06:13 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

FragTrap::FragTrap() : _name("Claptrap") {
	_hp = 100;
	_maxHp = 100;
	_ep = 100;
	_maxEp = 100;
	_lvl = 1;
	_meleeDmg = 30;
	_rangeDmg = 20;
	_armor = 5;
	std::cout << "[" << _name << "]: Unce! Unce! Unce! The best robot has arrived *beatboxes*" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _name(name) {
	_hp = 100;
	_maxHp = 100;
	_ep = 100;
	_maxEp = 100;
	_lvl = 1;
	_meleeDmg = 30;
	_rangeDmg = 20;
	_armor = 5;
	std::cout << "[" << _name << "]: Unce! Unce! Unce! The best robot has arrived *beatboxes*" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &copy) {
	std::cout << " _-_-- Fragtrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "[" << _name << "]: I thought... we were friends... *dies while doing one last beatbox* Unce!" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "Copying " << rhs._name << "'s data into " << _name << std::endl;
	_name = rhs._name;
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

void		FragTrap::rangedAttack(std::string const &target) const {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, ";
	std::cout << "causing " << _rangeDmg << " points of damage!" << std::endl;
	return;
}

void		FragTrap::meleeAttack(std::string const &target) const {
	std::cout << "FR4G-TP " << _name << " melee attacks " << target << ", ";
	std::cout << "causing " << _meleeDmg << " points of damage!" << std::endl;
	return;
}

void		FragTrap::takeDamage(unsigned int amount) {
	unsigned int realDmg;

	realDmg = (amount > _armor) ? (amount - _armor) : 0;
	_hp = (realDmg < _hp) ? (_hp - realDmg) : 0;

	std::cout << "FR4G-TP " << _name << " takes " << amount << " damage points, ";
	std::cout << "leaving them with " << _hp << " HP points!" << std::endl;
	return;
}

void		FragTrap::beRepaired(unsigned int amount) {
	if (amount >= _maxHp - _hp) // safety in case of (_hp + amount) overflow
		_hp = _maxHp;
	else
		_hp = ((_hp + amount) < _maxHp) ? (_hp + amount) : _maxHp;

	std::cout << "FR4G-TP " << _name << " gets a repair worth " << amount << " HP points, ";
	std::cout << "leaving them with " << _hp << " HP points!" << std::endl;
	return;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (_ep < 25)
	{
		std::cout << "[" << _name << "]: I'm out of energy for this nonsense... just go to the next exercise already..." << std::endl;
		return;
	}

	std::string attackPool[5] = {
								" throws pens at the face of ",
								" throws a birthday party and doesn't invite ",
								" asks his big brother to beat up ",
								" takes his weeb katana out *swing* and attacks ",
								" calls Karen and tells her the manager's name is "
								};
	_ep -= 25;
	std::cout << "FR4G-TP " << _name << attackPool[rand() % 5] << target;
	std::cout << " for 25 EP (" << _ep << " EP left)" << std::endl;
	return;
}
