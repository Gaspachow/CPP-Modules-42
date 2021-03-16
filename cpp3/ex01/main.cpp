/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:49:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 16:35:27 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	FragTrap clappy("Clappy");
	ScavTrap scavy("Scavy");

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	clappy.takeDamage(50);
	clappy.takeDamage(70);
	scavy.takeDamage(10);
	scavy.takeDamage(2000);
	std::cout << std::endl;

	std::cout << "--- Test beRepaired ---" << std::endl;
	clappy.beRepaired(20);
	clappy.beRepaired(200);
	scavy.beRepaired(99);
	scavy.beRepaired(1000);
	std::cout << std::endl;

	std::cout << "--- Test attack functions ---" << std::endl;
	clappy.meleeAttack("Rambo");
	scavy.meleeAttack("Dumbo");
	clappy.rangedAttack("Bobby");
	scavy.rangedAttack("Albatar");
	std::cout << std::endl;

	std::cout << "--- Test vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		clappy.vaulthunter_dot_exe("Gaspacho");
	}
	std::cout << std::endl;

	std::cout << "--- Test challengeNewcomer ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		scavy.challengeNewcomer("Gaspacho");
	}
	std::cout << std::endl;

	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
