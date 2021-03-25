/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:00:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 17:05:48 by gsmets           ###   ########.fr       */
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
	return;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
	return;
}

TacticalMarine			&TacticalMarine::operator=(TacticalMarine const &rhs) {
	return (*this);
}

ISpaceMarine			*TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}
