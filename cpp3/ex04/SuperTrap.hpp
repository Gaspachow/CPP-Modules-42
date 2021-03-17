/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:14:19 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/17 16:49:11 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_H
# define SUPERTRAP_CLASS_H
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {

public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &copy);
	~SuperTrap();

	SuperTrap	&operator=(SuperTrap const &rhs);
};

#endif
