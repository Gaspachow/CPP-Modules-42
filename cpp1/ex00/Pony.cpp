/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:20:43 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 16:49:37 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {

	std::cout << "> Creating our Pony named " << _name << std::endl;
	_color = "grey";
	_legs = 4;
	_noise = "* NEIGHING NOISE *";
	_favFood = "Carrots";
	return;
}

Pony::~Pony() {
	std::cout << "> You just made me kill " << _name << "... You monster!" << std::endl;
	return;
}

void	Pony::makeNoise() {
	std::cout << _name << " says: " << _noise << std::endl;
	return;
}
