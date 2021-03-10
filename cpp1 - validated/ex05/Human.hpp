/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:00:12 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 17:33:03 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H
# include "Brain.hpp"

class Human {

private:
	Brain const	_myBrain;

public:
	Human();
	~Human();
	std::string		identify();
	Brain const	&	getBrain();
};

#endif
