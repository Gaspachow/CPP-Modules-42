/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiniNuke.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:36:08 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 16:49:15 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniNuke.hpp"
#include <string>
#include <iostream>

MiniNuke::MiniNuke() : AWeapon("Mini Nuke", 20, 9999999) {
	return;
}

MiniNuke::MiniNuke(MiniNuke const &copy) : AWeapon(copy) {
	return;
}

MiniNuke::~MiniNuke() {
	return;
}

MiniNuke	&MiniNuke::operator=(MiniNuke const &rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void		MiniNuke::attack() const {
	std::cout << "* ......... KAAAAAAAABOUUUUUUUUUUUUUUUUUUMMMMMMMMMM!!!!!! *" << std::endl;
}
