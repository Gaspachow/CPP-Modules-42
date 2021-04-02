/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 17:19:03 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>
#include <iostream>

Form::Form() : _name("Boring Form"), _signed(0), _signGrade(150), _execGrade(150) {
	return;
}

Form::Form(std::string const &name, int const sGrade, int const xGrade) :
	_name(name),
	_signed(0),
	_signGrade(sGrade),
	_execGrade(xGrade)
{
	if (sGrade > 150 || xGrade > 150)
		throw Form::GradeTooLowException();
	if (sGrade < 1 || xGrade < 1)
		throw Form::GradeTooHighException();
	return;
}

Form::Form(Form const &copy) :
	_name(copy._name),
	_signed(copy._signed),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade)
{
	return;
}

Form::~Form() {
	return;
}

Form			&Form::operator=(Form const &rhs) {
	_signed = rhs._signed;
	return (*this);
}

std::string			Form::getName() const {
	return(_name);
}

int					Form::getSignGrade() const {
	return(_signGrade);
}

int					Form::getExecGrade() const {
	return(_execGrade);
}

bool				Form::isSigned() const {
	return(_signed);
}

void					Form::beSigned(Bureaucrat worker) {
	if (worker.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else
		_signed = true;
	return;
}

const char				*Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

const char				*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char				*Form::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

std::ostream			&operator<<(std::ostream &o, Form const &rhs) {
	o << "Form '" << rhs.getName() << "' is " << (rhs.isSigned() ? "signed" : "unsigned");
	o << " | ";
	o << "Grade to sign: " << rhs.getSignGrade() << ", ";
	o << "Grade to execute: " << rhs.getExecGrade() << std::endl;
	return (o);
}
