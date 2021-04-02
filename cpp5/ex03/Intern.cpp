/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 19:42:22 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

Intern::Intern() {
	return;
}

Intern::Intern(Intern const &copy) {
	*this = copy;
	return;
}

Intern::~Intern() {
	return;
}

Intern		&Intern::operator=(Intern const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

Form		*Intern::makeForm(std::string const &formName, std::string const &target) const {
	ShrubberyCreationForm shrub(target);
	RobotomyRequestForm robot(target);
	PresidentialPardonForm pres(target);

	Form *formArray[] = {&shrub, &robot, &pres};

	for (int i = 0; i <= 2; i++)
	{
		if (formName == formArray[i]->getName())
		{
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return(formArray[i]->clone());
		}
	}
	std::cout << "Error: Intern doesn't recognize this form." << std::endl;
	return (NULL);
}
