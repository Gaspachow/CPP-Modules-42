/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:08 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 17:34:46 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H
# include <string>

class ClapTrap {

protected:
	std::string		_name;
	std::string		_type;
	unsigned int	_hp;
	unsigned int	_maxHp;
	unsigned int	_ep;
	unsigned int	_maxEp;
	unsigned int	_lvl;
	unsigned int	_meleeDmg;
	unsigned int	_rangeDmg;
	unsigned int	_armor;

public:
	ClapTrap();
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &rhs);

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
