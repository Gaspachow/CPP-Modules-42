/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:55:42 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 15:00:53 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <string>
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
	return;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs) {
	Enemy::operator=(rhs);
	return (*this);
}

void		SuperMutant::takeDamage(int damage) {
	if (damage <= 3)
		return;
	else
		Enemy::takeDamage(damage - 3);
	return;
}
