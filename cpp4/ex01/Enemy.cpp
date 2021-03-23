/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:38:26 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:53:20 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>
#include <iostream>

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {
	return;
}

Enemy::Enemy(Enemy const &copy) {
	*this = copy;
	return;
}

Enemy::~Enemy() {
	return;
}

Enemy	&Enemy::operator=(Enemy const &rhs) {
	_type = rhs._type;
	_hp = rhs._hp;
	return (*this);
}

std::string	Enemy::getType() const {
	return (_type);
}

int			Enemy::getHP() const {
	return (_hp);
}

void		Enemy::takeDamage(int damage) {
	if (damage <= 0)
		return;
	else if (damage < _hp)
		_hp -= damage;
	else
		_hp = 0;
	return;
}
