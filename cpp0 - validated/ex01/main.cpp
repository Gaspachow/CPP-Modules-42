/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:59:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 16:50:55 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

std::string	short_string(std::string src)
{
	if (src.size() > 10)
	{
		src.resize(9);
		src.append(".");
	}
	return (src);
}

void		crappy_search(Contact book[8], int contactCount)
{
	int			i;
	std::string	buf;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	i = 0;
	while (i < contactCount)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << short_string(book[i].getFirstName());
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << short_string(book[i].getLastName());
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << short_string(book[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	while (42)
	{
		std::cout << "Enter an index: ";
		std::getline(std::cin, buf);
		i = atoi(buf.c_str());
		if (buf.size() == 1 && buf.at(0) >= '0' && buf.at(0) + 1 <= contactCount + '0')
			break;
		else
			std::cout << "Let's try again but with a correct index..." << std::endl;
		
	}
	book[i].printAttributes();
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
				std::cout << "HOLD UP... You have reached the max amount of contacts." << std::endl;
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