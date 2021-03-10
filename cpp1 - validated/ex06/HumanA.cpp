/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:55:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 19:51:36 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
# include <iostream>

// Constructor with a name and obligatory weapon argument
HumanA::HumanA(std::string name, Weapon &myWeapon) : _name(name), _myWeapon(myWeapon) {
	return;
}

// Destructor
HumanA::~HumanA() {
	return;
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with his " << _myWeapon.getType() << std::endl;
	return;
}
