/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:37:04 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/09 18:26:21 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

int	gaspacho_replace(char **av);
int	error_manager(int status, std::string errMessage);
int	args_checker(std::string &fn, std::string &s1, std::string &s2, std::ifstream &fs);

#endif
