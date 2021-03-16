/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:01:55 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/16 16:29:00 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H
# include <string>

class ScavTrap {

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_maxHp;
	unsigned int	_ep;
	unsigned int	_maxEp;
	unsigned int	_lvl;
	unsigned int	_meleeDmg;
	unsigned int	_rangeDmg;
	unsigned int	_armor;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const &target);
};

#endif
