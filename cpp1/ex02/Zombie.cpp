/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:02:33 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 17:56:30 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie() : _name("Bob"), _type("default") {
	return;
}

// Constructor with specific name and type
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	return;
}

// Destructor
Zombie::~Zombie() {
	return;
}

// Annonce function of format '<{name} ({type})> Braiiiiiinnnsssss ...'
void	Zombie::announce() {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiinnnsssss ..." << std::endl;
	return;
}