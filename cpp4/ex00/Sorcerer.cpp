/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:30:44 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:03:32 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>
#include <string>

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getNameTitle() << ", is born!" << std::endl;
	return;
}

Sorcerer::~Sorcerer() {
	std::cout << this->getNameTitle() << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs) {
	std::cout << _name << "is stealing " << rhs._name << "'s identity... Wait that's illegal!" << std::endl;
	_name = rhs._name;
	_title = rhs._title;
	return (*this);
}

std::string	Sorcerer::getNameTitle() const {
	return (_name + ", " + _title);
}

void		Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
	return;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs) {
	o << "I am " << rhs.getNameTitle() << ", and I like ponies!" << std::endl;
	return (o);
}