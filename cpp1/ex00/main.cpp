/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:34:05 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 16:49:50 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheStack() {
	Pony stackPony("Stacky");

	stackPony.makeNoise();
	return;
}

void		ponyOnTheHeap() {
	Pony* heapPony = new Pony("Hippy");

	heapPony->makeNoise();
	delete heapPony;
	return;
}

int			main() {
	std::cout << "--- STARTING STACK FUNCTION ---" << std::endl;
	ponyOnTheStack();
	std::cout << "--- FINISHED STACK FUNCTION ---" << std::endl;

	std::cout << std::endl;

	std::cout << "--- STARTING HEAP FUNCTION ---" << std::endl;
	ponyOnTheHeap();
	std::cout << "--- FINISHED HEAP FUNCTION ---" << std::endl;
	return (0);
}
