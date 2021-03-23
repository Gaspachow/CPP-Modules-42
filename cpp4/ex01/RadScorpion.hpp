/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:08:23 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 15:09:14 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_H
# define RADSCORPION_CLASS_H
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy{

public:
	RadScorpion();
	RadScorpion(RadScorpion const &copy);
	virtual ~RadScorpion();

	RadScorpion	&operator=(RadScorpion const &rhs);
};

#endif
