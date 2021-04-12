/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:54:19 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/12 14:36:38 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "whatever.hpp"

int 	main() {
	// Initializing rand() seed (new one every second)
	srand(time(0));

	int a = rand() % 200;
	int b = rand() % 200;

	std::cout << "- TESTING SIMPLE TYPE -" << std::endl;
	std::cout << "----- Generated value -----" << std::endl;
		std::cout << "a is: " << a << std::endl;
		std::cout << "b is: " << b << std::endl;
	std::cout << std::endl;

	std::cout << "----- value after using swap-----" << std::endl;
		swap(a, b);
		std::cout << "a is: " << a << std::endl;
		std::cout << "b is: " << b << std::endl;
	std::cout << std::endl;

	std::cout << "----- test of min -----" << std::endl;
		std::cout << "Lowest value between a(" << a << ") and b(" << b << ") is: " << min(a, b) << std::endl;
	std::cout << std::endl;

	std::cout << "----- test of max-----" << std::endl;
		std::cout << "Highest value between a(" << a << ") and b(" << b << ") is: " << max(a, b) << std::endl;
	std::cout << std::endl;



	Awesome aw1(rand() % 200);
	Awesome aw2(rand() % 200);
	std::cout << "- TESTING COMPLEX TYPE -" << std::endl;
	std::cout << "----- Generated value -----" << std::endl;
		std::cout << "aw1 is: " << aw1.getN() << std::endl;
		std::cout << "aw2 is: " << aw2.getN() << std::endl;
	std::cout << std::endl;

	std::cout << "----- value after using swap-----" << std::endl;
		swap(aw1, aw2);
		std::cout << "aw1 is: " << aw1.getN() << std::endl;
		std::cout << "aw2 is: " << aw2.getN() << std::endl;
	std::cout << std::endl;

	std::cout << "----- test of min -----" << std::endl;
		std::cout << "Lowest value between a(" << aw1.getN() << ") and b(" << aw2.getN() << ") is: " << min(aw1, aw2).getN() << std::endl;
	std::cout << std::endl;

	std::cout << "----- test of max-----" << std::endl;
		std::cout << "Highest value between a(" << aw1.getN() << ") and b(" << aw2.getN() << ") is: " << max(aw1, aw2).getN() << std::endl;
	std::cout << std::endl;

	return (0);
}
