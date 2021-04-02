/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:37:38 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 17:50:01 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential Pardon Form", 25, 5), _target(target) {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) {
	*this = copy;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	_target = rhs._target;
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();

	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return;
}
