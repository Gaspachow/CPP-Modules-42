/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:08:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 15:10:11 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <string>
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy) {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs) {
	Enemy::operator=(rhs);
	return (*this);
}
