/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:34:56 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/13 19:56:39 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Span.hpp"

int 	main() {
	Span	sp(10);
	int		random;
	srand(time(0)); // setting up random seed (different every second)

	std::cout << "--- Trying to find spans on empty list (should trigger exceptions) ---" << std::endl;
		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
		try {
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- Filling up the list and trying again with simple numbers ---" << std::endl;
		for (int i = 0; i < 5; i++)
		{
			random = (rand() % 83) - 42; // random number from -42 to 42
			sp.addNumber(random);
			std::cout << "Added: " << random << std::endl;
		}
		std::cout << " -> Shortest span found is: " << sp.shortestSpan() << std::endl;
		std::cout << " -> Longest span found is: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Adding numbers using a range of iterators with values including 2000 and -2200 (new longest should be 4200 and shortest 0) ---" << std::endl;
		std::vector<int> vector;
		vector.push_back(2000);
		vector.push_back(250);
		vector.push_back(-2200);
		vector.push_back(891);
		sp.addNumber(vector.begin(), vector.end());
		std::cout << " -> Shortest span found is: " << sp.shortestSpan() << std::endl;
		std::cout << " -> Longest span found is: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Adding numbers using a range of iterators with values from -20000 to 20000 (new longest should be 4200 and shortest 0) ---" << std::endl;
		std::cout << "TO DO" << std::endl;
		std::cout << " -> Shortest span found is: " << sp.shortestSpan() << std::endl;
		std::cout << " -> Longest span found is: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	return (0);
}
