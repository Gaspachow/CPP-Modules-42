/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:52:03 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 19:51:52 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H
# include <string>
# include "Weapon.hpp"

class HumanA {

private:
	std::string	_name;
	Weapon		&_myWeapon;

public:
	HumanA(std::string name, Weapon &myWeapon);
	~HumanA();
	void	attack() const;
};

#endif
