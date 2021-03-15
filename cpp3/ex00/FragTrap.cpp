/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:04:27 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/15 16:18:05 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

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

FragTrap::~FragTrap() {
	std::cout << "[" << _name << "]: I thought... we were friends... *dies while doing one last beatbox* Unce!" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &copy) {
	std::cout << " _-_-- Fragtrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

FragTrap			&FragTrap::operator=(FragTrap const &rhs) {
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
