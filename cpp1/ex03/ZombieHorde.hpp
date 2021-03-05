/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:53:58 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/05 18:27:44 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CLASS_H
# define ZOMBIE_HORDE_CLASS_H
# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class ZombieHorde {

private:
	Zombie*	_horde;
	int		_hordeNb;		

public:
	ZombieHorde();
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();
};

#endif
