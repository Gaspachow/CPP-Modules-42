/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:53:53 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:01:20 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>
#include <string>

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " <<_name << " just appeared!" << std::endl;
	return;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
	return;
}

Victim		&Victim::operator=(Victim const &rhs) {
	std::cout << _name << "is stealing " << rhs._name << "'s identity... Wait that's illegal!" << std::endl;
	_name = rhs._name;
	return (*this);
}

std::string	Victim::getName() const {
	return (_name);
}

void		Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
	return;
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs) {
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}