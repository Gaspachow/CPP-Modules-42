/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:50:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:31:39 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>
#include <iostream>

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apCost(apcost), _damage(damage) {
	return;
}

AWeapon::AWeapon(AWeapon const &copy) {
	*this = copy;
	return;
}

AWeapon::~AWeapon() {
	return;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs) {
	_name = rhs._name;
	_apCost = rhs._apCost;
	_damage = rhs._damage;
	return (*this);
}

std::string	AWeapon::getName() const {
	return (_name);
}

int			AWeapon::getAPCost() const {
	return (_apCost);
}

int			AWeapon::getDamage() const {
	return (_damage);
}
