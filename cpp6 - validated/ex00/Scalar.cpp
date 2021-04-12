/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:01:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/06 18:38:19 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <limits.h>

Scalar::Scalar() {
	return;
}

Scalar::Scalar(Scalar const &copy) {
	*this = copy;
	return;
}

Scalar::~Scalar() {
	return;
}

Scalar		&Scalar::operator=(Scalar const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::string	Scalar::findType(std::string literal) const {
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return ("double");
	else if (literal.length() > 3 && literal.at(literal.length() - 1) == 'f')
		return("float");
	else if (literal.length() > 2 && literal.find('.') != std::string::npos)
		return ("double");
	else if (literal.length() == 1)
	{
		char c = literal.at(0);
		if (c >= '0' && c <= '9')
			return ("int");
		else if (c >= 32 && c <= 126)
			return ("char");
		else
			return ("invalid");
	}
	else
		return ("int");
}

void		Scalar::print(char c) const {
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void		Scalar::print(int i) const {
	if (i > 256 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void		Scalar::print(float f) const {
	if (f > 256 || f < 0 || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f > 126 || f < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if (f > INT_MAX || f < INT_MIN || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void		Scalar::print(double d) const {
	if (d > 256 || d < 0 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d > 126 || d < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (d > INT_MAX || d < INT_MIN || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	
	if ((d > __FLT_MAX__ || d < __FLT_MIN__))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;

	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
