/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:00:52 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 18:50:01 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_CLASS_H
# define ZOMBIE_EVENT_CLASS_H
# include "Zombie.hpp"

class ZombieEvent {

private:
	std::string	_type;

public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string newType);
	Zombie*	newZombie(std::string name);
	void	randomChump();
};

#endif
