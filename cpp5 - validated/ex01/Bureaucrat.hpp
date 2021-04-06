/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 15:54:14 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H
# include "Form.hpp"
# include <string>
# include <iostream>

class Form;

class Bureaucrat {

private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	virtual ~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat const &rhs);

	std::string	getName() const;
	int			getGrade() const;
	void		promote();
	void		demote();
	void		signForm(Form &form) const;

	class		GradeTooLowException : public std::exception {
		public:
			const char	*what() const throw();
	};

	class		GradeTooHighException : public std::exception {
		public:
			const char	*what() const throw();
	};

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);  

#endif
