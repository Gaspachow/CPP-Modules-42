/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:55:57 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 17:35:45 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <string>
#include <iostream>

int	main() {
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new TacticalMarine;

	Squad *squad = new Squad;

	squad->push(bob);
	squad->push(jim);
	squad->push(new TacticalMarine);

	std::cout << "Creating constructor copy of squad" << std::endl;
	ISquad *squad2 = new Squad(*squad);
	std::cout << std::endl;

	std::cout << "Doing assignation of squad in empty squad" << std::endl;
	Squad *squad3 = new Squad;
	*squad3 = *squad;
	std::cout << std::endl;

	std::cout << "Doing assignation of squad in already filled squad" << std::endl;
	*squad3 = *squad;
	std::cout << std::endl;

	std::cout << "Deleting squad 1" << std::endl;
	delete squad;
	std::cout << "Deleting squad 2" << std::endl;
	delete squad2;
	std::cout << "Deleting squad 3" << std::endl;
	delete squad3;
	std::cout << std::endl;

	return (0);
}