/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:34:37 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 19:34:29 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {
	return;
}

AMateria::AMateria(AMateria const &copy) {
	*this = copy;
	_type = copy._type;
	return;
}

AMateria::~AMateria() { 
	return;
}

AMateria	&AMateria::operator=(AMateria const &rhs) { 
	_xp = rhs._xp;
	return (*this);
}

std::string	 const &AMateria::getType() const {
	return (_type);
}

unsigned int		AMateria::getXP() const {
	return (_xp);
}

void			AMateria::use(ICharacter &target) {
	std::string dumbSubject = target.getName();
	unsigned int newXP = _xp + 10;
	if (newXP > _xp)
		_xp = newXP;
	return;
}
