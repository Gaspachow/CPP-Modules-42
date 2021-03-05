/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:47:33 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/05 18:32:23 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main() {

	//setting up a different random seed for rand() every second
	srand(time(0));

	std::cout << "--- 1.TEST HORDE OF 5 ---" << std::endl;
	ZombieHorde testHorde1(5);
	testHorde1.announce();

	std::cout << "--- 2.TEST HORDE OF 0 ---" << std::endl;
	ZombieHorde testHorde2(0);
	testHorde2.announce();

	std::cout << "--- 3.TEST HORDE OF -5 ---" << std::endl;
	ZombieHorde testHorde3(-5);
	testHorde3.announce();

	std::cout << "--- 4.TEST HORDE OF 20 ---" << std::endl;
	ZombieHorde testHorde4(20);
	testHorde4.announce();

	// Reaching end of the function, each stack-allocated testHorde will destroy
	// Each of their called destructor will delete the heap-allocated horde (array) of zombies
	// Can be tested with the command <valgrind ./horde.out>
	return (0);
}
