/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:26:12 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 17:49:02 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

NinjaTrap::NinjaTrap() : ClapTrap() {
	_name = "Boring Ninjagy";
	_type = "NINJ4-TP";
	_baseStatsNinja[0] = _hp = 60;
	_baseStatsNinja[1] = _maxHp = 60;
	_baseStatsNinja[2] = _ep = 120;
	_baseStatsNinja[3] = _maxEp = 120;
	_baseStatsNinja[4] = _lvl = 1;
	_baseStatsNinja[5] = _meleeDmg = 60;
	_baseStatsNinja[6] = _rangeDmg = 5;
	_baseStatsNinja[7] = _armor = 0;
	std::cout << "[" << _name << "]: NIIIIINJAAAAAAAAAAAA wouuuzaaa! Bushido No Claptrap Jutsu!" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap() {
	_name = name;
	_type = "NINJ4-TP";
	_baseStatsNinja[0] = _hp = 60;
	_baseStatsNinja[1] = _maxHp = 60;
	_baseStatsNinja[2] = _ep = 120;
	_baseStatsNinja[3] = _maxEp = 120;
	_baseStatsNinja[4] = _lvl = 1;
	_baseStatsNinja[5] = _meleeDmg = 60;
	_baseStatsNinja[6] = _rangeDmg = 5;
	_baseStatsNinja[7] = _armor = 0;
	std::cout << "[" << _name << "]: NIIIIINJAAAAAAAAAAAA wouuuzaaa! Bushido No Claptrap Jutsu!" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy) {
	std::cout << " _-_-- Ninjatrap data duplicated... pip pup puuup pip... --_-_" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "[" << _name << "]: Kage no Justsu, Ancestral Shadow Technique of Disappearance. *shwing pouf*" << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void		NinjaTrap::ninjaShoebox(ClapTrap const &target) const {
	std::cout << _type << " " << _name << " slices the boring ClapTrap " << target.getName() << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(FragTrap const &target) const {
	std::cout << _type << " " << _name << " avoids that pathetic attack from FR4G-TP " << target.getName();
	std::cout << " and slices him in the bearings! Ouch!" << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const &target) const {
	std::cout << _type << " " << _name << " dares to approach SC4V-TP " << target.getName();
	std::cout << " and destroys him using a special massive Frog attack!" << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const &target) const {
	std::cout << _type << " " << _name << " and other NINJ4-TP " << target.getName();
	std::cout << " stare at each other for a second... The first says 'Omae wa mo shindeiru' and destroys the second in the blink of an eye... wow." << std::endl;
	return;
}

void		NinjaTrap::meleeAttack(std::string const &target) const {
	std::cout << _type << " " << _name << " uses special ninjutsu close combat techniques against " << target << ", ";
	std::cout << "causing " << _meleeDmg << " points of damage!" << std::endl;
	return;
}
