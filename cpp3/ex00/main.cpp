/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:49:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/15 16:21:29 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main() {
	FragTrap johnny("Johnny");
	FragTrap johnny2("newJohnny");
	johnny2 = johnny;

	return(0);
}