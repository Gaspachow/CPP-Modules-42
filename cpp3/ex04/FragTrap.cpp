/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:04:27 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 17:47:24 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

FragTrap::FragTrap() : ClapTrap() {
	_name = "Boring Fraggy";
	_type = "FR4G-TP";
	_baseStatsFrag[0] = _hp = 100;
	_baseStatsFrag[1] = _maxHp = 100;
	_baseStatsFrag[2] = _ep = 100;
	_baseStatsFrag[3] = _maxEp = 100;
	_baseStatsFrag[4] = _lvl = 1;
	_baseStatsFrag[5] = _meleeDmg = 30;
	_baseStatsFrag[6] = _rangeDmg = 20;
	_baseStatsFrag[7] = _armor = 5;
	std::cout << "[" << _name << "]: Unce! Unce! Unce! The best robot has arrived *beatboxes*" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap() {
	_name = name;
	_type = "FR4G-TP";
	_baseStatsFrag[0] = _hp = 100;
	_baseStatsFrag[1] = _maxHp = 100;
	_baseStatsFrag[2] = _ep = 100;
	_baseStatsFrag[3] = _maxEp = 100;
	_baseStatsFrag[4] = _lvl = 1;
	_baseStatsFrag[5] = _meleeDmg = 30;
	_baseStatsFrag[6] = _rangeDmg = 20;
	_baseStatsFrag[7] = _armor = 5;
	std::cout << "[" << _name << "]: Unce! Unce! Unce! The best robot has arrived *beatboxes*" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy) {
	std::cout << " _-_-- Fragtrap data duplicated... pip pup puuup pip... --_-_" << std::endl;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "[" << _name << "]: I thought... we were friends... *dies while doing one last beatbox* Unce!" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
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
	std::cout << _type << " " << _name << attackPool[rand() % 5] << target;
	std::cout << " for 25 EP (" << _ep << " EP left)" << std::endl;
	return;
}

void		FragTrap::rangedAttack(std::string const &target) const {
	std::cout << _type << " " << _name << " shoots 1 bazillion bullets at  " << target << ", ";
	std::cout << "causing " << _rangeDmg << " points of damage!" << std::endl;
	return;
}
