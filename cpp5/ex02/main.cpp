/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:43:46 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 17:50:45 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main() {

	//initliazing random seed
	std::srand(std::time(0));

	std::cout << "--- 1. Creating the forms  and bureaucrats ---" << std::endl;
		ShrubberyCreationForm shrub("coco");
		RobotomyRequestForm robot("student");
		PresidentialPardonForm pres("criminal dude");
		Bureaucrat ceo("CEO", 1);
		Bureaucrat bob("Bob", 70);

		std::cout << shrub;
		std::cout << robot;
		std::cout << pres;
		std::cout << bob;
		std::cout << ceo;
	std::cout << std::endl;

	std::cout << "--- 2. CEO  and Bob try executing the forms ---" << std::endl;
		ceo.executeForm(shrub);
		ceo.executeForm(robot);
		ceo.executeForm(pres);
		bob.executeForm(shrub);
		bob.executeForm(robot);
		bob.executeForm(pres);
	std::cout << std::endl;

	std::cout << "--- 3. CEO and Bob try signing the forms ---" << std::endl;
		bob.signForm(shrub);
		bob.signForm(robot);
		bob.signForm(pres);
		ceo.signForm(shrub);
		ceo.signForm(robot);
		ceo.signForm(pres);
	std::cout << std::endl;

	std::cout << "--- 4. CEO  and Bob try executing the forms again ---" << std::endl;
		bob.executeForm(shrub);
		bob.executeForm(robot);
		bob.executeForm(pres);
		ceo.executeForm(shrub);
		ceo.executeForm(robot);
		ceo.executeForm(pres);
	std::cout << std::endl;

	return (0);
}
