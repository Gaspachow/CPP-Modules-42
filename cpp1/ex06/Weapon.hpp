/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:15:34 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 19:49:49 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
# include <string>

class Weapon {

private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const	&getType() const;
	void				setType(std::string newType);
};

#endif
