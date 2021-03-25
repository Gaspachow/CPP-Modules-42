/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:00:22 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 17:06:03 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTMARINE_CLASS_H
# define TACTMARINE_CLASS_H
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	virtual ~TacticalMarine();

	TacticalMarine	&operator=(TacticalMarine const &rhs);

	ISpaceMarine	*clone() const;
	// void			battleCry() const;
	// void			rangedAttack() const;
	// void			meleeAttack() const;
};

#endif
