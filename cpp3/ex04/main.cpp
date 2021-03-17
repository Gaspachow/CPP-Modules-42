/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:49:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 17:57:24 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	FragTrap	clappy("Clappy");
	ScavTrap	scavy("Scavy");
	NinjaTrap	clapruto("Clapruto");
	NinjaTrap	slowNinja("Slowy");
	SuperTrap	super("Soupy Boiii");
	ClapTrap	boring;

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	clappy.takeDamage(50);
	clappy.takeDamage(70);
	clapruto.takeDamage(5);
	clapruto.takeDamage(42);
	super.takeDamage(20);
	super.takeDamage(200);
	std::cout << std::endl;

	std::cout << "--- Test beRepaired ---" << std::endl;
	clappy.beRepaired(20);
	clappy.beRepaired(200);
	clapruto.beRepaired(10);
	clapruto.beRepaired(9);
	super.beRepaired(20);
	super.beRepaired(200);
	std::cout << std::endl;

	std::cout << "--- Test attack functions ---" << std::endl;
	clappy.meleeAttack("Rambo");
	clapruto.meleeAttack("Clapsuke");
	super.meleeAttack("Super bad guy");
	clappy.rangedAttack("Bobby");
	clapruto.rangedAttack("Clapkashi");
	super.rangedAttack("Super far target");
	std::cout << std::endl;

	std::cout << "--- Test FragTrap vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		clappy.vaulthunter_dot_exe("Gaspacho");
	}
	std::cout << std::endl;

	std::cout << "--- Test SuperTrap vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		super.vaulthunter_dot_exe("Supa Gaspacho");
	}
	std::cout << std::endl;

	std::cout << "--- Test NinjaTrap ninjaShoebox ---" << std::endl;
	clapruto.ninjaShoebox(boring);
	clapruto.ninjaShoebox(clappy);
	clapruto.ninjaShoebox(scavy);
	clapruto.ninjaShoebox(slowNinja);
	std::cout << std::endl;

	std::cout << "--- Test SuperTrap ninjaShoebox ---" << std::endl;
	super.ninjaShoebox(boring);
	super.ninjaShoebox(clappy);
	super.ninjaShoebox(scavy);
	super.ninjaShoebox(slowNinja);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
