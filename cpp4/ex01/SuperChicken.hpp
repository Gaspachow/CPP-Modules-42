/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperChicken.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:35:42 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 16:35:58 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERCHICKEN_CLASS_H
# define SUPERCHICKEN_CLASS_H
# include <string>
# include "Enemy.hpp"

class SuperChicken : public Enemy{

public:
	SuperChicken();
	SuperChicken(SuperChicken const &copy);
	virtual ~SuperChicken();

	SuperChicken	&operator=(SuperChicken const &rhs);
};

#endif
