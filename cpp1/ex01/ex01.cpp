/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:24:13 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/05 18:39:49 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string	panthere = std::string("String panthere");

	std::cout << panthere << std::endl;
}


// Main to use with valgrind below

// int		main()
// {
// 	memoryLeak();
// }