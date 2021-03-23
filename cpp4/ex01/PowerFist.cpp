/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:36:08 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:37:03 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <string>
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy) {
	return;
}

PowerFist::~PowerFist() {
	return;
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void		PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
