/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:55:57 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 18:22:39 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <string>
#include <iostream>

int	main() {

	std::cout << "1. Creating a Marine and Terminator and pushing them in Squad1" << std::endl;
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;

		Squad *squad = new Squad;

		squad->push(bob);
		squad->push(jim);
	std::cout << std::endl;

	/*
	** Uncomment the part below if needed to test with bigger squads (will be longer to read though)
	*/
	// std::cout << "1.5 Pushing two new marines and two new terminators in Squad1" << std::endl;
	// 	squad->push(new TacticalMarine);
	// 	squad->push(new TacticalMarine);
	// 	squad->push(new AssaultTerminator);
	// 	squad->push(new AssaultTerminator);
	// std::cout << std::endl;

	std::cout << "2. Creating constructor copy of Squad1 in an ISquad" << std::endl;
		ISquad *isquad = new Squad(*squad);
	std::cout << std::endl;

	std::cout << "3. activating ISquad's marines" << std::endl;
		for (int i = 0; i < isquad->getCount(); i++)
		{
			ISpaceMarine *cur = isquad->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
	std::cout << std::endl;

	std::cout << "4. Doing assignation of Squad1 in empty Squad2" << std::endl;
		Squad *squad3 = new Squad;
		*squad3 = *squad;
	std::cout << std::endl;

	std::cout << "5. Doing assignation of Squad1 in already filled Squad2 (should kill all soliders before deep copy)" << std::endl;
		*squad3 = *squad;
	std::cout << std::endl;

	std::cout << "6. Deleting Squad1" << std::endl;
		delete squad;
	std::cout << std::endl;

	std::cout << "7. Deleting ISquad" << std::endl;
		delete isquad;
	std::cout << std::endl;

	std::cout << "8. Deleting Squad2" << std::endl;
		delete squad3;
	std::cout << std::endl;

	std::cout << "9. Deleting empty ISquad" << std::endl;
		ISquad *empty = new Squad;
		delete empty;
	std::cout << std::endl;

	std::cout << "10. Deleting empty Squad" << std::endl;
		Squad *empty2 = new Squad;
		delete empty2;
	std::cout << std::endl;

	return (0);
}
