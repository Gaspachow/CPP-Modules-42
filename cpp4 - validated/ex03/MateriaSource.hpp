/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:21:14 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 20:37:05 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATSOURCE_CLASS_H
# define MATSOURCE_CLASS_H
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria	*_sources[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	virtual ~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &rhs);

	void			learnMateria(AMateria *m);
	AMateria		*createMateria(std::string const &type);
};

#endif
