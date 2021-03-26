/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:42:02 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 17:12:02 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_ABSTRACT_CLASS_H
# define AMATERIA_ABSTRACT_CLASS_H
# include <string>
# include "ICharacter.hpp"

class AMateria {

private:
	std::string		_type;
	unsigned int	_xp;
	AMateria(); // You can't create a materia without attributes

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	virtual ~AMateria();

	AMateria	&operator=(AMateria const &rhs);

	std::string	const	&getType() const;
	unsigned int		getXP() const;

	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
