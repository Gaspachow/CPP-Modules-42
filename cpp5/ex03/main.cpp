/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:43:46 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 19:38:49 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main() {

	//initliazing random seed
	std::srand(std::time(0));

	std::cout << "--- 1. Creating the intern, forms and bureaucrats ---" << std::endl;
		Intern bill;
		Form *f1 = bill.makeForm("shrubbery creation", "jardin");
		Form *f2 = bill.makeForm("robotomy request", "Kanye");
		Form *f3 = bill.makeForm("presidential pardon", "Ted");
		Form *f4 = bill.makeForm("Super secret form...", "null");
	
		Bureaucrat ceo("CEO", 1);
		Bureaucrat bob("Bob", 70);

		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;
		std::cout << "Form 4 is ... " << f4 << std::endl;
		std::cout << bob;
		std::cout << ceo;
	std::cout << std::endl;

	std::cout << "--- 2. CEO  and Bob try executing the forms ---" << std::endl;
		ceo.executeForm(*f1);
		ceo.executeForm(*f2);
		ceo.executeForm(*f3);
		bob.executeForm(*f1);
		bob.executeForm(*f2);
		bob.executeForm(*f3);
	std::cout << std::endl;

	std::cout << "--- 3. CEO and Bob try signing the forms ---" << std::endl;
		bob.signForm(*f1);
		bob.signForm(*f2);
		bob.signForm(*f3);
		ceo.signForm(*f1);
		ceo.signForm(*f2);
		ceo.signForm(*f3);
	std::cout << std::endl;

	std::cout << "--- 4. CEO  and Bob try executing the forms again ---" << std::endl;
		bob.executeForm(*f1);
		bob.executeForm(*f2);
		bob.executeForm(*f3);
		ceo.executeForm(*f1);
		ceo.executeForm(*f2);
		ceo.executeForm(*f3);
	std::cout << std::endl;

	delete f1;
	delete f2;
	delete f3;

	return (0);
}
