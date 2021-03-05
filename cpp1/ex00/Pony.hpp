/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:00:46 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/05 17:24:30 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H
# include <iostream>

class Pony {

	private:
		std::string	_name;
		std::string	_color;
		int			_legs;
		std::string _noise;
		std::string	_favFood;

	public:
		Pony(std::string name);
		~Pony();
		void		makeNoise();
};

#endif
