/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:00:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 18:12:52 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <string>
#include <iostream>

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = copy;
	return;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
	return;
}

TacticalMarine			&TacticalMarine::operator=(TacticalMarine const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

ISpaceMarine			*TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}

void					TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
	return;
}

void					TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void					TacticalMarine::meleeAttack() const {
	std::cout << "* attackas with a chainsword *" << std::endl;
	return;
}
