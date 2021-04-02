/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 17:45:00 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request Form", 72, 45), _target(target) {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) {
	*this = copy;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	_target = rhs._target;
	return (*this);
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();

	std::cout << "** Drilling noises * ... ";
	if (rand() % 2)
		std::cout << _target << " has been lobotomized successfully" << std::endl;
	else
		std::cout << _target << " has not been lobotomized because of a failure... Oups?" << std::endl;

	return;
}
