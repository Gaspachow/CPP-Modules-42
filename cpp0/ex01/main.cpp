/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:59:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/01 20:04:40 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string	crappify_string(std::string src)
{
	if (src.size() > 10)
	{
		src.resize(9);
		src.append(".");
	}
	else if (src.size() < 10)
	{
		while (src.size() != 10)
			src.insert(0, " ");
	}
	return (src);
}

void		crappy_search(Contact book[8], int contactCount)
{
	int i;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	i = 0;
	while (i < contactCount)
	{
		std::cout << "         " << i;
		std::cout << '|';
		std::cout << crappify_string(book[i].getFirstName());
		std::cout << '|';
		std::cout << crappify_string(book[i].getLastName());
		std::cout << '|';
		std::cout << crappify_string(book[i].getNickname());
		std::cout << std::endl;
		i++;
	}
}

int			main() {
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
			if (!contactCount)
				std::cout << "You have no contacts :'(" << std::endl;
			else
				crappy_search(book, contactCount);
		}
	}
	return (0);
}