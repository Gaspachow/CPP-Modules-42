/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:05:29 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:35:05 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy) {
	return;
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void		PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
