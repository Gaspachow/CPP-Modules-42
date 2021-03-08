/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:26:03 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 18:50:26 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Default constructor
Weapon::Weapon() : _type("words"){
	return;
}
// Constructor with a type argument
Weapon::Weapon(std::string type) : _type(type){
	return;
}

// Destructor
Weapon::~Weapon() {
	return;
}

// Returns a reference to a const version of _type
std::string const	&Weapon::getType() const {
	return (_type);
}

// Set new string value to _type
void				Weapon::setType(std::string newType) {
	_type = newType;
}
