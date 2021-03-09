/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:53:56 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/09 16:26:29 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	error_manager(int status, std::string errMessage) {
	std::cout << "Error: " << errMessage << std::endl;
	return (status);
}

int	args_checker(int ac, char **av) {
	std::string	filename(av[1]);
	std::string	s1(av[2]);
	std::string	s2(av[3]);

	if (s1 == s2)
		return(error_manager(2, "s1 and s2 share the same value."));
	if (filename.empty() || s1.empty() || s2.empty())
		return(error_manager(3, "empty string as argument is not supported."))
	
}

int	main(int ac, char **av) {
	int ret;

	if (ac != 4)
		return(error_manager(1, "wrong amount of arguments."));
	if ((ret = args_checker(ac, av)))
		return (ret);

}