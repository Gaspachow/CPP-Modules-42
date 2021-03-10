/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:54:01 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/09 16:26:35 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {
	return;
}

// Creates a horde of N zombies (subject forces me to use 'N'. Yes, I don't like it either...)
ZombieHorde::ZombieHorde(int N) {
	std::string	namePool[8] = {"Bob", "Alice", "Joe", "Wargh",
								"Broseph", "Rocky", "TpaNet", "Perlimpinpin"};
	int			i;

	if (N <= 0)
	{
		std::cout << "Error: N invalid, defaulting to a 10 zombies horde..." << std::endl;
		N = 10;
	}
	_horde = new Zombie[N];
	_hordeNb = N;
	i = -1;
	while (++i < _hordeNb)
	{
		_horde[i].setName(namePool[rand() % 8]);
	}
}

// We make sure to delete the _horde when destroyed, as it was allocated on the heap.
ZombieHorde::~ZombieHorde() {
	delete [] _horde;
	return;
}

// We trigger the announce method in each Zombie of the horde
void	ZombieHorde::announce() {
	int	i;

	i = -1;
	while (++i < _hordeNb)
		_horde[i].announce();

	return;
}
