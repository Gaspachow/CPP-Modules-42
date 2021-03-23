/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:06:03 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:37:24 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_H
# define PLASMARIFLE_CLASS_H
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	virtual ~PlasmaRifle();

	PlasmaRifle	&operator=(PlasmaRifle const &rhs);

	void	attack() const;
};

#endif
