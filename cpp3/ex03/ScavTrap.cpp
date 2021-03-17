/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:01:45 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 18:05:08 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

ScavTrap::ScavTrap() : ClapTrap() {
	_name = "Boring Scavy";
	_type = "SC4V-TP";
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

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	_name = name;
	_type = "SC4V-TP";
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

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy) {
	std::cout << " _-_-- ScavTrap data duplicated... pip pup puuup pip... --_-_" << std::endl;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "[" << _name << "]: A SCAVTRAP NEVER DIES! Oh... wait... I guess we d... Bzzz *OFF*" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
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
