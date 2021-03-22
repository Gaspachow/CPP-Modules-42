/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:17:37 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/22 19:44:10 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_H
# define PEON_CLASS_H
# include "Victim.hpp"
# include <string>

class Peon : public Victim {

private:
	Peon(); // A Peon can't be created with no name.

public:
	Peon(std::string name);
	Peon(Peon const &copy);
	virtual ~Peon();

	Peon	&operator=(Peon const &rhs);

	void		getPolymorphed() const;
};

#endif
