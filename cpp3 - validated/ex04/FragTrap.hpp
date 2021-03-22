/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:28:22 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 17:47:29 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

protected:
	unsigned int	_baseStatsFrag[8];

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

	void		vaulthunter_dot_exe(std::string const &target);
	void		rangedAttack(std::string const &target) const;
};

#endif
