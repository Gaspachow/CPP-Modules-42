/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiniNuke.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:47:20 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/23 16:47:48 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININUKE_CLASS_H
# define MININUKE_CLASS_H
# include <string>
# include "AWeapon.hpp"

class MiniNuke : public AWeapon{

public:
	MiniNuke();
	MiniNuke(MiniNuke const &copy);
	virtual ~MiniNuke();

	MiniNuke	&operator=(MiniNuke const &rhs);

	void	attack() const;
};

#endif
