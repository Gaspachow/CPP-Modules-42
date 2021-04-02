/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 17:37:25 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_CLASS_H
# define PRESIDENTIALFORM_CLASS_H
# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class PresidentialPardonForm : public Form {

private:
	std::string	_target;
	PresidentialPardonForm(); // can't create this class without a target

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm			&operator=(PresidentialPardonForm const &rhs);

	void	execute(Bureaucrat const &executor) const;

};

#endif
