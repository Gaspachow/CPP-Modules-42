/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:35:48 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:37:17 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_H
# define POWERFIST_CLASS_H
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon{

public:
	PowerFist();
	PowerFist(PowerFist const &copy);
	virtual ~PowerFist();

	PowerFist	&operator=(PowerFist const &rhs);

	void	attack() const;
};

#endif
