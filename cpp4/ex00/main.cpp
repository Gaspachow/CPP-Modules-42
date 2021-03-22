/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:50:45 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:09:50 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>

int	main() {
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");

	std::cout << robert << jim;

	robert.polymorph(jim);
	return (0);
}