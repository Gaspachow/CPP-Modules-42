/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:18:06 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 18:30:19 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure() : AMateria("cure") {
	_xp = 0;
	return;
}

Cure::Cure(Cure const &copy) : AMateria(copy) {
	_xp = 0;
	return;
}

Cure::~Cure() { 
	return;
}

Cure	&Cure::operator=(Cure const &rhs) { 
	AMateria::operator=(rhs);
	return (*this);
}

AMateria		*Cure::clone() const {
	return (new Cure(*this));
}

void			Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
	return;
}
