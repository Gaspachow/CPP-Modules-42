/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:28:22 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/15 16:08:44 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H
# include <string>

class FragTrap {

private:
	std::string	_name;
	int			_hp;
	int			_maxHp;
	int			_ep;
	int			_maxEp;
	int			_lvl;
	int			_meleeDmg;
	int			_rangeDmg;
	int			_armor;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

	void		rangeAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target) const;
};

#endif
