/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:00:12 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 17:49:08 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

// Default constructor
Human::Human() {
	return;
}


// Destructor
Human::~Human() {
	return;
}

Brain const	&	Human::getBrain() {
	return(_myBrain);
}

std::string	Human::identify() {
	return (_myBrain.identify());
}
