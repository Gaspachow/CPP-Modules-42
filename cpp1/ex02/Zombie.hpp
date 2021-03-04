/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:00:52 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 17:51:04 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>

class Zombie {

private:
	std::string	_name;
	std::string	_type;

public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void	announce();
};

#endif