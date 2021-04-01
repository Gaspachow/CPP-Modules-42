/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:11:23 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 16:01:39 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;
	Character(); // You can't create a Character without name


public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual ~Character();

	Character	&operator=(Character const &rhs);

	void		recoverAP();
	void		equip(AWeapon*);
	void		attack(Enemy*);
	std::string	getName() const;
	int			getAP() const;
	AWeapon		*getWeapon() const;
};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif
