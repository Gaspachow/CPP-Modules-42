/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 19:36:02 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("robotomy request", 72, 45, target) {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) {
	*this = copy;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	std::string stupidSubject = rhs.getName();
	return (*this);
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();

	std::cout << "** Drilling noises * ... ";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been lobotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has not been lobotomized because of a failure... Oups?" << std::endl;

	return;
}

Form					*RobotomyRequestForm::clone() const {
	return (new RobotomyRequestForm(this->getTarget()));
}
