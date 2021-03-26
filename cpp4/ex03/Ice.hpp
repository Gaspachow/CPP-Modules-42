/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:18:02 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 18:31:15 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_H
# define ICE_CLASS_H
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {

private:
	std::string		_type;
	unsigned int	_xp;

public:
	Ice();
	Ice(Ice const &copy);
	virtual ~Ice();

	Ice			 &operator=(Ice const &rhs);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif
