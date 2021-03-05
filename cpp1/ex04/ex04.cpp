/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:37:04 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/05 18:45:17 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	brainPtr = &brain;
	std::string&	brainRef = brain;

	std::cout << "--- Displaying the string using the Pointer ---" << std::endl;
	std::cout << *brainPtr << std::endl;

	std::cout << std::endl;

	std::cout << "--- Displaying the string using the Reference ---" << std::endl;
	std::cout << brainRef << std::endl;
}
