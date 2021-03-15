/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:26:16 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/11 14:53:19 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed() : _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
	return;
}
