/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:26:07 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 17:57:43 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

protected:
	unsigned int	_baseStatsNinja[8];

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &copy);
	~NinjaTrap();

	NinjaTrap	&operator=(NinjaTrap const &rhs);

	void		ninjaShoebox(ClapTrap const &target) const;
	void		ninjaShoebox(FragTrap const &target) const;
	void		ninjaShoebox(ScavTrap const &target) const;
	void		ninjaShoebox(NinjaTrap const &target) const;
	void		meleeAttack(std::string const &target) const;
};

#endif
