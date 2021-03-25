/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:00:33 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 18:12:56 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <string>
#include <iostream>

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) {
	std::cout << "* teleports from space *" << std::endl;
	*this = copy;
	return;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I'll be back..." << std::endl;
	return;
}

AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

ISpaceMarine			*AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}

void					AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return;
}

void					AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
	return;
}

void					AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
	return;
}
