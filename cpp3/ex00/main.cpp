/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:49:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/15 18:21:46 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	FragTrap clappy("Clappy");
	FragTrap blank;

	blank = clappy;

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	blank.takeDamage(50);
	blank.takeDamage(70);
	std::cout << std::endl;
	std::cout << "--- Test beRepaired ---" << std::endl;
	blank.beRepaired(20);
	blank.beRepaired(200);
	std::cout << std::endl;
	std::cout << "--- Test attack functions ---" << std::endl;
	blank.meleeAttack("Rambo");
	blank.rangedAttack("Bobby");
	std::cout << std::endl;
	std::cout << "--- Test vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		blank.vaulthunter_dot_exe("Gaspacho");
	}

	return(0);
}
