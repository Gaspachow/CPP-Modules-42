/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:54:07 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:05:11 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H
# include <string>

class Victim {

private:
	std::string _name;
	Victim(); // A Victim can't be created with no name.

public:
	Victim(std::string name);
	virtual ~Victim();

	Victim	&operator=(Victim const &rhs);

	std::string	getName() const;
	void		getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
