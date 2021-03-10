/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:24:56 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 18:03:09 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

// Default constructor
Brain::Brain() : _neurons(2){
	return;
}


// Destructor
Brain::~Brain() {
	return;
}

int			Brain::getNeurons() const {
	return (_neurons);
}

// Returns address of this brain
std::string Brain::identify() const {
	std::stringstream pointerAdress;
	std::string stringAddress;

	pointerAdress << this;
	stringAddress = pointerAdress.str();
	return (stringAddress);
}
