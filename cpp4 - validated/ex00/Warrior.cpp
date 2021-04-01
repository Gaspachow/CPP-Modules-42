/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:56:20 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 16:54:34 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"
#include <iostream>
#include <string>

Warrior::Warrior(std::string name) : Victim(name) {
	std::cout << "Bwaaaaaar!!!" << std::endl;
	return;
}

Warrior::Warrior(Warrior const &copy) : Victim(copy) {
	std::cout << "Bwaaaaaar!!!" << std::endl;
	return;
}

Warrior::~Warrior() {
	std::cout << "I die a warrior's deaaath!!!" << std::endl;
	return;
}

Warrior		&Warrior::operator=(Warrior const &rhs) {
	Victim::operator=(rhs);
	return (*this);
}

void		Warrior::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a delicate flower..." << std::endl;
	return;
}
