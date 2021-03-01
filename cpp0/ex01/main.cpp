/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:59:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/01 19:17:41 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int	main() {
	std::string	buf;
	Contact		book[8];
	int			contactCount;	

	contactCount = 0;
	while (42)
	{
		std::cout << "CrappyPhoneBook> ";
		std::getline(std::cin, buf);
		if (buf == "EXIT")
			break ;
		else if (buf == "ADD")
		{
			if (contactCount == 8)
				std::cout << "Whoopsie... You have reached the max amount of contacts." << std::endl;
			else
			{
				std::cout << "Let's add a new contact!" << std::endl;
				book[contactCount].setAttributes();
				contactCount++;
			}
		}
		else if (buf == "SEARCH")
		{
			std::cout << "Searching..." << std::endl;
		}
	}
	return (0);
}