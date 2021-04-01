/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperChicken.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:36:04 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 16:38:29 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperChicken.hpp"
#include <string>
#include <iostream>

SuperChicken::SuperChicken() : Enemy(1000, "SuperChicken") {
	std::cout << "The ground shakes...   * Book bok bok bok boooook *" << std::endl;
	return;
}

SuperChicken::SuperChicken(SuperChicken const &copy) : Enemy(copy) {
	std::cout << "The ground shakes...   * Book bok bok bok boooook *" << std::endl;
	return;
}

SuperChicken::~SuperChicken() {
	std::cout << "* BIIIMBMBBBROOOAABAAABOUM * a chicken nugget smell is in the air..." << std::endl;
	return;
}

SuperChicken	&SuperChicken::operator=(SuperChicken const &rhs) {
	Enemy::operator=(rhs);
	return (*this);
}
