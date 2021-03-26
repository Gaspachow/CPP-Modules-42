/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:12:04 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 17:15:05 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_INTERFACE_CLASS_H
# define ICHARACTER_INTERFACE_CLASS_H
# include <string>
# include "AMateria.hpp"

class ICharacter {

public:
	virtual						~ICharacter();
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;
};

#endif