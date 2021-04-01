/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:38:17 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:44:58 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H
# include <string>

class Enemy {

private:
	int			_hp;
	std::string	_type;
	Enemy(); // You can't create an Enemy without attributes


public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &copy);
	virtual ~Enemy();

	Enemy	&operator=(Enemy const &rhs);

	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int);
};

#endif
