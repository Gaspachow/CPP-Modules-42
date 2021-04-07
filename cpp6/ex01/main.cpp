/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:59:10 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/07 19:24:47 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

typedef	struct 	Data {
	std::string		str1;
	int				n;
	std::string		str2;
}					Data;

void	*serialize(void) {
	// Allocating 32 + 4 + 32 = 68 bytes. (If on mac, it would be 24 + 4 + 24 = 52)
	char	*raw = new char[20];
	char	str1[9];
	char	str2[9];
	int		integer;

	// Filling up the two strings randomly
	std::string	alphanum("0123456789ABCDEF");
	for (int i = 0; i < 8; i++) {
		str1[i] = alphanum[rand() % 16];
		str2[i] = alphanum[rand() % 16];
	}
	str1[8] = '\0';
	str2[8] = '\0';

	// Random int in range 0 - 200
	integer = rand() % 200;

	//information about created values
	std::cout << "- strings and int created -" << std::endl;
	std::cout << "Str1 is: " << str1 << std::endl;
	std::cout << "Int is: " << integer << std::endl;
	std::cout << "Str2 is: " << str2 << std::endl;

	// Copying the strings and integer, byte per byte in our raw serialized data
	char *tmpraw = str1;
	for (int i = 0; i < 8; i++)
		raw[i] = *(tmpraw++);
	tmpraw = reinterpret_cast<char*>(&integer);
	for (int i = 8; i < 12; i++)
		raw[i] = *(tmpraw++);
	tmpraw = str2;
	for (int i = 12; i < 20; i++)
		raw[i] = *(tmpraw++);

	return (reinterpret_cast<void*>(raw));
}

Data	*deserialize(void *raw) {
	char *rawChar = reinterpret_cast<char*>(raw);
	Data *ret = new Data;
	char *tmp = new char[4];

	ret->str1 = std::string(rawChar, 8);
	ret->str2 = std::string(rawChar + 12, 8);

	for (int i = 0; i < 4; i++)
		tmp[i] = rawChar[8 + i];
	ret->n = *(reinterpret_cast<int*>(tmp));

	delete[] tmp;
	return (ret);
}

int 	main() {
	// Initializing rand seed (new one every second)
	srand(time(0));

	void *raw = serialize();
	Data *test = deserialize(raw);

	std::cout << "----- DATA -----" << std::endl;
	std::cout << "str1 is: " << test->str1 << std::endl;
	std::cout << "integer is: " << test->n << std::endl;
	std::cout << "str3 is: " << test->str2 << std::endl;

	delete		test;
	delete[]	reinterpret_cast<char*>(raw);

	return (0);
}
