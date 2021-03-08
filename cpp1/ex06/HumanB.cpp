/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:55:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 19:49:41 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
# include <iostream>

// Constructor with a type argument
HumanB::HumanB(std::string name) : _name(name), _myWeapon(NULL) {
	return;
}

// Destructor
HumanB::~HumanB() {
	return;
}

void	HumanB::attack() const {

	std::string usedWeapon = _myWeapon ? _myWeapon->getType() : "fists";

	std::cout << _name << " attacks with his " << usedWeapon << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	_myWeapon = &newWeapon;
	return;
}
