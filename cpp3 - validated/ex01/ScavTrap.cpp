/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:01:45 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 16:41:48 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

ScavTrap::ScavTrap() : _name("Scavy") {
	_hp = 100;
	_maxHp = 100;
	_ep = 50;
	_maxEp = 50;
	_lvl = 1;
	_meleeDmg = 20;
	_rangeDmg = 15;
	_armor = 3;
	std::cout << "[" << _name << "]: ScavTrap in da place! Please don't hit me, thank you." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name) {
	_hp = 100;
	_maxHp = 100;
	_ep = 50;
	_maxEp = 50;
	_lvl = 1;
	_meleeDmg = 20;
	_rangeDmg = 15;
	_armor = 3;
	std::cout << "[" << _name << "]: ScavTrap in da place! Please don't hit me, thank you." << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &copy) {
	std::cout << " _-_-- ScavTrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "[" << _name << "]: A SCAVTRAP NEVER DIES! Oh... wait... I guess we d... Bzzz *OFF*" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
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

void		ScavTrap::rangedAttack(std::string const &target) const {
	std::cout << "ScavTrap " << _name << " throws a rock at " << target << ", ";
	std::cout << "causing " << _rangeDmg << " points of damage!" << std::endl;
	return;
}

void		ScavTrap::meleeAttack(std::string const &target) const {
	std::cout << "ScavTrap " << _name << " high-kicks " << target << ", ";
	std::cout << "causing " << _meleeDmg << " points of damage!" << std::endl;
	return;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	unsigned int realDmg;

	realDmg = (amount > _armor) ? (amount - _armor) : 0;
	_hp = (realDmg < _hp) ? (_hp - realDmg) : 0;

	std::cout << "ScavTrap " << _name << " takes " << amount << " damage points, ";
	std::cout << "leaving them with " << _hp << " HP points!" << std::endl;
	return;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	if (amount >= _maxHp - _hp) // safety in case of (_hp + amount) overflow
		_hp = _maxHp;
	else
		_hp = ((_hp + amount) < _maxHp) ? (_hp + amount) : _maxHp;

	std::cout << "ScavTrap " << _name << " gets a repair worth " << amount << " HP points, ";
	std::cout << "leaving them with " << _hp << " HP points!" << std::endl;
	return;
}

void		ScavTrap::challengeNewcomer(std::string const &target) {
	if (_ep < 25)
	{
		std::cout << "[" << _name << "]: Did you think I have as much stamina as a FR4G-TP?? Give me a break, dude..." << std::endl;
		return;
	}

	std::string challengePool[5] = {
								"touch their nose with their tongue",
								"not cringe at the CPP module 3 subject (spoiler: it's impossible)",
								"write \"sudo rm -rf /\" on their computer's terminal",
								"take them to prom",
								"stop breathing automatically (Manual Breathing: Engaged)"
								};
	_ep -= 25;
	std::cout << "ScavTrap " << _name << " challenges " << target << " to " << challengePool[rand() % 5];
	std::cout << " for 25 EP (" << _ep << " EP left)" << std::endl;
	return;
}
