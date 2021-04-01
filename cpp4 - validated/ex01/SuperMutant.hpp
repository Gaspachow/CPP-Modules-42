/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:55:37 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 14:56:35 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_H
# define SUPERMUTANT_CLASS_H
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy{

public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	virtual ~SuperMutant();

	SuperMutant	&operator=(SuperMutant const &rhs);

	void	takeDamage(int);
};

#endif
