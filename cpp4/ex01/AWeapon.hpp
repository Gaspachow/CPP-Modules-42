/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:37:07 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:37:31 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_ABSTRACT_CLASS_H
# define AWEAPON_ABSTRACT_CLASS_H
# include <string>

class AWeapon {

private:
	std::string	_name;
	int			_apCost;
	int			_damage;
	AWeapon(); // You can't create a weapon without attributes


public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &copy);
	virtual ~AWeapon();

	AWeapon	&operator=(AWeapon const &rhs);

	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;
};

#endif
