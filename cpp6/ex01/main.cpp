/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:59:10 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/07 15:58:46 by gsmets           ###   ########.fr       */
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
	std::string	array("0123456789ABCDEF");
	std::cout << sizeof(array) << std::endl;
	return (NULL);
}

int 	main() {
	// Initializing rand seed (new one every second)
	srand(time(0));
	serialize();
	return (0);
}
