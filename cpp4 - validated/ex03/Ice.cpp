/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:18:06 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 20:42:23 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice() : AMateria("ice") {
	_xp = 0;
	return;
}

Ice::Ice(Ice const &copy) : AMateria(copy) {
	_xp = 0;
	return;
}

Ice::~Ice() { 
	return;
}

Ice	&Ice::operator=(Ice const &rhs) { 
	AMateria::operator=(rhs);
	return (*this);
}

AMateria		*Ice::clone() const {
	return (new Ice(*this));
}

void			Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
	return;
}
