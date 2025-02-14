/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 18:57:17 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYFORM_CLASS_H
# define SHRUBBERYFORM_CLASS_H
# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class ShrubberyCreationForm : public Form {

private:
	ShrubberyCreationForm(); // can't create this class without a target

public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &rhs);

	void	execute(Bureaucrat const &executor) const;
	Form	*clone() const;
};

#endif
