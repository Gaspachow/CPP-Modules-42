/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:14:48 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 17:02:12 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperChicken.hpp"
#include "MiniNuke.hpp"
#include <string>
#include <iostream>

int	main() {
	Character	*bob = new Character("Bobby");
	Character	*alice = new Character("Alice");
	AWeapon		*pRifle = new PlasmaRifle();
	AWeapon		*pFist = new PowerFist();
	AWeapon		*nuke = new MiniNuke();

	std::cout << "----- Bobby and Alice characters were just created ------" << std::endl;
		std::cout << *bob << *alice;
	std::cout << std::endl;

	std::cout << "----- A SuperMutant and RadScorpion appear! ------" << std::endl;
		Enemy	*mutant = new SuperMutant();
		Enemy	*scorpion = new RadScorpion();
	std::cout << std::endl;

	std::cout << "----- Bobby tries to attack the SuperMutant! ------" << std::endl;
		bob->attack(mutant);
	std::cout << std::endl;

	std::cout << "----- Alice found weapons, her and Bobby equip them! ------" << std::endl;
		alice->equip(pFist);
		bob->equip(pRifle);
		std::cout << *bob << *alice;
	std::cout << std::endl;

	std::cout << "----- Bobby starts shooting at the RadScorpion until it dies! ------" << std::endl;
		bob->attack(scorpion);
		bob->attack(scorpion);
		bob->attack(scorpion);
		bob->attack(scorpion);
		std::cout << *bob << *alice;
	std::cout << std::endl;

	std::cout << "----- Alice charges at the SuperMutant and hits him 3 times! Bob recovers his AP... ------" << std::endl;
		alice->attack(mutant);
		alice->attack(mutant);
		alice->attack(mutant);
		bob->recoverAP();
		std::cout << *bob << *alice;
		std::cout << "The mutant has " << mutant->getHP() << " HP left." << std::endl;
	std::cout << std::endl;

	std::cout << "----- Bobby sees an opportunity and finishes the Super Mutant ------" << std::endl;
		bob->attack(mutant);
		bob->attack(mutant);
		std::cout << *bob << *alice;
	std::cout << std::endl;

	std::cout << "----- Oh no... a new challenger approaches! ------" << std::endl;
		Enemy *chick = new SuperChicken();
		std::cout << *bob << *alice;
		std::cout << "New enemy, the SuperChicken has " << chick->getHP() << " HP." << std::endl;
	std::cout << std::endl;

	std::cout << "----- Alice and Bobby give everything they have until exhaustion  ------" << std::endl;
		bob->attack(chick);
		alice->attack(chick);
		bob->attack(chick);
		alice->attack(chick);
		bob->attack(chick);
		alice->attack(chick);
		bob->attack(chick);
		bob->attack(chick);
		std::cout << *bob << *alice;
		std::cout << "The SuperChicken has " << chick->getHP() << " HP." << std::endl;
	std::cout << std::endl;

	std::cout << "----- When all seemed lost, Alice finds a Mini Nuke! ------" << std::endl;
		alice->equip(nuke);
		std::cout << *bob << *alice;
		std::cout << "New enemy, the SuperChicken has " << chick->getHP() << " HP." << std::endl;
	std::cout << std::endl;

	std::cout << "----- Alice restores some AP while Bobbdy distracts the chicken ------" << std::endl;
		alice->recoverAP();
		alice->recoverAP();
		bob->attack(chick);
		std::cout << *bob << *alice;
		std::cout << "New enemy, the SuperChicken has " << chick->getHP() << " HP." << std::endl;
	std::cout << std::endl;

	std::cout << "----- Alice finds an opening and uses the MiniNuke on the chicken ------" << std::endl;
		alice->attack(chick);
		std::cout << *bob << *alice;
	std::cout << std::endl;


	std::cout << "----- THE END ------" << std::endl;
	delete alice;
	delete bob;
	delete pRifle;
	delete pFist;
	delete nuke;

	return (0);
}
