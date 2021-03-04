/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:02:33 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 18:46:17 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent() : _type("default") {
	srand(time(0));
	return;
}

ZombieEvent::~ZombieEvent() {
	return;
}

void	ZombieEvent::setZombieType(std::string newType) {
	_type = newType;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return(new Zombie(name, _type));
}

void	ZombieEvent::randomChump() {
	std::string namePool[7] = {"Bob", "Alice", "Joe", "Rocky", "Pepito", "Vader", "Coral"};
	int index = rand() % 7;
	Zombie chump(namePool[index], _type);
	chump.announce();
	return;
}