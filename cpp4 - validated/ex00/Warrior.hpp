/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:56:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:56:48 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_CLASS_H
# define WARRIOR_CLASS_H
# include "Victim.hpp"
# include <string>

class Warrior : public Victim {

private:
	Warrior(); // A Warrior can't be created with no name.

public:
	Warrior(std::string name);
	Warrior(Warrior const &copy);
	virtual ~Warrior();

	Warrior		&operator=(Warrior const &rhs);

	void		getPolymorphed() const;
};

#endif
