/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 15:52:38 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Boring guy"), _grade(150) {
	return;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name) {
	*this = copy;
	return;
}

Bureaucrat::~Bureaucrat() {
	return;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs) {
	_grade = rhs._grade;
	return (*this);
}

std::string			Bureaucrat::getName() const {
	return(_name);
}

int					Bureaucrat::getGrade() const {
	return(_grade);
}

void					Bureaucrat::promote() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--_grade;
	return;
}

void					Bureaucrat::demote() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++_grade;
	return;
}

void					Bureaucrat::signForm(Form &form) const {
	if (form.isSigned())
		std::cout << _name << " cannot sign " << form.getName() << " because it's already signed." << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << _name << " signs " << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
		}
		
	}
	return;
}

const char				*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Can't have a grade lower than 150");
}

const char				*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Can't have a grade higher than 1");
}

std::ostream			&operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}
