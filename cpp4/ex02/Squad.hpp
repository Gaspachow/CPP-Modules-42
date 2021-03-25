/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:00:22 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/25 16:33:29 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_H
# define SQUAD_CLASS_H
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct			s_unitList{
	ISpaceMarine		*marine;
	struct s_unitList	*next;
}						t_unitList;

class Squad : public ISquad {

private:
	int				_unitCount;
	t_unitList		*_units;

public:
	Squad();
	Squad(Squad const &copy);
	virtual ~Squad();

	Squad	&operator=(Squad const &rhs);

	int				getCount() const;
	ISpaceMarine	*getUnit(int) const;
	int				push(ISpaceMarine*);
};

#endif
