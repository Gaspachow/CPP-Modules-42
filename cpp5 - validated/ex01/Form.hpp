/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 15:53:54 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class Form {

private:
	std::string const	_name;
	bool				_signed;
	int	const			_signGrade;
	int	const			_execGrade;

public:
	Form();
	Form(std::string const &name, int const sGrade, int const xGrade);
	Form(Form const &copy);
	virtual ~Form();

	Form	&operator=(Form const &rhs);

	std::string	getName() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	bool		isSigned() const;
	void		beSigned(Bureaucrat worker);

	class		GradeTooLowException : public std::exception {
		public:
			const char	*what() const throw();
	};

	class		GradeTooHighException : public std::exception {
		public:
			const char	*what() const throw();
	};

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);  

#endif
