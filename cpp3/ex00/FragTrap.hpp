/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:28:22 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/12 17:37:45 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H
# include <string>

class FragTrap {

private:
	int			_hp;
	int			_maxHp;
	int			_ep;
	int 		_maxEp;
	int			_lvl;
	std::string	_name;
	int			_meleeDmg;
	int			_rangeDmg;
	int			_armor;

public:
	FragTrap();
	~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

};

#endif
