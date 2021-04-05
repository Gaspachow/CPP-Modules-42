/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:35:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/02 19:24:08 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H
# include "Form.hpp"
# include <string>

class Intern {

public:
	Intern();
	Intern(Intern const &copy);
	virtual ~Intern();

	Intern	&operator=(Intern const &rhs);

	Form	*makeForm(std::string const &formName, std::string const &target) const;
};

#endif
