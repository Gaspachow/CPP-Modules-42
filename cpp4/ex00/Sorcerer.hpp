/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:30:51 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:05:16 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H
# include "Victim.hpp"
# include <string>

class Sorcerer {

private:
	std::string _name;
	std::string _title;
	Sorcerer(); // A Sorcerer can't be created with no name and title.

public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();

	Sorcerer	&operator=(Sorcerer const &rhs);

	std::string	getNameTitle() const;
	void		polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
