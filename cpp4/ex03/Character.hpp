/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:57:37 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 18:36:35 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

private:
	std::string		_name;
	AMateria		*_inventory[4];
	Character(); // You can't create a character without name

public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual ~Character();

	Character			&operator=(Character const &rhs);

	std::string	const	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);		
};

#endif
