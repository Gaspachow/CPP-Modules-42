/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:47:33 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 18:53:39 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main() {
	Zombie		zombie1;
	Zombie*		zombie2;
	Zombie*		zombie3;
	ZombieEvent	event;

	zombie1.announce();

	event.setZombieType("Nice");
	zombie2 = event.newZombie("Buddy");
	zombie2->announce();
	delete zombie2;

	event.setZombieType("Bulldozer");
	zombie3 = event.newZombie("Big Joe");
	zombie3->announce();
	delete zombie3;

	event.setZombieType("Random Chump");
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();


	return (0);
}