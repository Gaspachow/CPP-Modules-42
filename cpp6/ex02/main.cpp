/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:21:47 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/08 16:30:24 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void) {
	int random = (rand() % 3);
	Base *ptr;
	char c;

	switch(random) {
		case 0 : 
			ptr = new A;
			c = 'A';
			break;
		case 1 :
			ptr = new B;
			c = 'B';
			break;
		case 2 :
			ptr = new C;
			c = 'C';
			break;
	}

	std::cout << "Generating class of type " << c << std::endl;
	return (ptr);
}

void	identify_from_pointer(Base *p) {
	char	c = 0;

	if (A *test = dynamic_cast<A*>(p))
		c = 'A';
	else if (B *test = dynamic_cast<B*>(p))
		c = 'B';
	else if (C *test = dynamic_cast<C*>(p))
		c = 'C';
	
	if (c)
		std::cout << "Pointer identified as class " << c << std::endl;
	else
		std::cout << "Impossible to identify class of pointer" << std::endl;
	return;
}

void	identify_from_reference(Base &p) {
	char	c = 0;

	try {
		A test = dynamic_cast<A&>(p);
		c = 'A';
	}
	catch(std::exception &e) { }

	try {
		B test = dynamic_cast<B&>(p);
		c = 'B';
	}
	catch(std::exception &e) { }

	try {
		C test = dynamic_cast<C&>(p);
		c = 'C';
	}
	catch(std::exception &e) { }

	if (c)
		std::cout << "Reference identified as class " << c << std::endl;
	else
		std::cout << "Impossible to identify class of reference" << std::endl;
	return;
}

int 	main() {
	// Initializing rand seed (new one every second)
	srand(time(0));

	std::cout << "--- Generating random class (A, B, C) ---" << std::endl;
		Base *ptr = generate();
		identify_from_pointer(ptr);
		identify_from_reference(*ptr);
	std::cout << std::endl;

	std::cout << "--- Generating wrong class of type Base (not A, B or C) ---" << std::endl;
		Base *ptr2 = new Base;
		identify_from_pointer(ptr2);
		identify_from_reference(*ptr2);
	std::cout << std::endl;

	delete ptr;
	delete ptr2;
	return (0);
}
