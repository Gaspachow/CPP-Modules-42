/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:14:23 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 17:29:17 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap() {
	_name = "Boring Supery";
	_type = "SUP3R-TP";
	_hp = _baseStatsFrag[0];
	_maxHp = _baseStatsFrag[1];
	_ep = _baseStatsNinja[2];
	_maxEp = _baseStatsNinja[3];
	_lvl = 1;
	_meleeDmg = _baseStatsNinja[5];
	_rangeDmg = _baseStatsFrag[6];
	_armor = _baseStatsFrag[7];
	std::cout << "[" << _name << "]: SUP3R... TR4P... ARRIVING TO DOMINATE!!!" << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(), NinjaTrap(), FragTrap() {
	_name = name;
	_type = "SUP3R-TP";
	_hp = _baseStatsFrag[0];
	_maxHp = _baseStatsFrag[1];
	_ep = _baseStatsNinja[2];
	_maxEp = _baseStatsNinja[3];
	_lvl = 1;
	_meleeDmg = _baseStatsNinja[5];
	_rangeDmg = _baseStatsFrag[6];
	_armor = _baseStatsFrag[7];
	std::cout << "[" << _name << "]: SUP3R... TR4P... ARRIVING TO DOMINATE!!!" << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &copy) : ClapTrap(copy) {
	std::cout << " _-_-- Supertrap data duplicated... pip pup puuup pip... --_-_" << std::endl;
	return;
}

SuperTrap::~SuperTrap() {
	std::cout << "[" << _name << "]: SUPER DYING!!!!!! Yeeeeha!" << std::endl;
	return;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}
