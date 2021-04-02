/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 19:00:32 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYFORM_CLASS_H
# define ROBOTOMYFORM_CLASS_H
# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class RobotomyRequestForm : public Form {

private:
	RobotomyRequestForm(); // can't create this class without a target

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm			&operator=(RobotomyRequestForm const &rhs);

	void	execute(Bureaucrat const &executor) const;
	Form	*clone() const;
};

#endif
