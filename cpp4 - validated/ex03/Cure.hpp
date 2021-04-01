/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:18:02 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 18:31:15 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_H
# define CURE_CLASS_H
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria {

private:
	std::string		_type;
	unsigned int	_xp;

public:
	Cure();
	Cure(Cure const &copy);
	virtual ~Cure();

	Cure		&operator=(Cure const &rhs);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif
