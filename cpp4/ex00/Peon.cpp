/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:17:21 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 16:54:22 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>
#include <string>

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog Zog." << std::endl;
	return;
}

Peon::Peon(Peon const &copy) : Victim(copy) {
	std::cout << "Zog Zog." << std::endl;
	return;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon		&Peon::operator=(Peon const &rhs) {
	Victim::operator=(rhs);
	return (*this);
}

void		Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
	return;
}
