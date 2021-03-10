/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:52:03 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 19:51:11 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H
# include <string>
# include "Weapon.hpp"

class HumanB {

private:
	std::string	_name;
	Weapon		*_myWeapon;

public:
	HumanB(std::string name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &newWeapon);
};

#endif
