/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 19:11:13 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_CLASS_H
# define PRESIDENTIALFORM_CLASS_H
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <string>

class Bureaucrat;

class PresidentialPardonForm : public Form {

private:
	PresidentialPardonForm(); // can't create this class without a target

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm			&operator=(PresidentialPardonForm const &rhs);

	void	execute(Bureaucrat const &executor) const;
};

#endif
