/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:49:52 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/06 18:16:08 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: enter one argument." << std::endl;
		return (1);
	}
	if (av[1][0] == '\0') {
		std::cout << "Error: invalid argument." << std::endl;
		return (2);
	}

	Scalar converter;
	std::string literal = static_cast<std::string>(av[1]);
	std::string type = converter.findType(literal); 

	if (type == "int") {
		int i = std::atoi(literal.c_str());
		converter.print(i);
	}
	else if (type == "float") {
		float f = std::atof(literal.c_str());
		converter.print(f);
	}
	else if (type == "double") {
		double d = static_cast<double>(std::atof(literal.c_str()));
		converter.print(d);
	}
	else if (type == "char") {
		char c = literal.at(0);
		converter.print(c);
	}
	else if (type == "invalid") {
		std::cout << "Invalid character input" << std::endl;
	}
	return (0);
}
