/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:50:45 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 20:04:12 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Warrior.hpp"
#include "Peon.hpp"
#include <iostream>

int	main() {
	Sorcerer	robert("Robert", "the Magnificent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Warrior		bill("Billy");

	std::cout << std::endl;

	std::cout << robert << jim << joe << bill;

	std::cout << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bill);

	std::cout << std::endl;

	return (0);
}
