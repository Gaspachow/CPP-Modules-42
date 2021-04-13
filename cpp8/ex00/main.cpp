/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:48:31 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/13 17:10:28 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int 	main() {
	std::list<int> list;
	std::vector<int> vector;

	std::cout << "--- Using easyfind on empty containers ---" << std::endl;
		std::cout << "Return value of search 42 in empty list: " << easyfind(list, 42) << std::endl;
		std::cout << "Return value of search 42 in empty vector: " << easyfind(vector, 42) << std::endl << std::endl;

		std::cout << "--- Filling the containers and trying again ---" << std::endl;
		list.push_back(0);
		list.push_back(15);
		list.push_back(42);
		list.push_back(18);

		vector.push_back(21);
		vector.push_back(42);
		vector.push_back(80);
		vector.push_back(42);
		std::cout << "Return value of search 42 in list: " << easyfind(list, 42) << std::endl;
		std::cout << "Return value of search 42 in vector: " << easyfind(vector, 42) << std::endl << std::endl;

	return (0);
}
