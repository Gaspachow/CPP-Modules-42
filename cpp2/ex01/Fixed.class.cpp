/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:26:16 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/11 16:32:24 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(int const i) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = i << _fracBits;
	return;
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	float factor = 1 << _fracBits;
	_rawBits = (int)roundf(f * factor);
	return;
}

Fixed			&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = rhs.getRawBits();
	return (*this);
}

int				Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void			Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
	return;
}

int				Fixed::toInt() const {
	return (_rawBits >> _fracBits);
}

float			Fixed::toFloat() const {
	float factor = 1 << _fracBits;
	return ((float)_rawBits / factor);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}
