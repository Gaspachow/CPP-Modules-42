/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:10:32 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 20:39:21 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_INTERFACE_CLASS_H
# define IMATERIASOURCE_INTERFACE_CLASS_H
# include "AMateria.hpp"

class AMateria;

class IMateriaSource {

public:
	virtual				~IMateriaSource() {}
	virtual void		learnMateria(AMateria*) = 0;
	virtual	AMateria	*createMateria(std::string const &type) = 0;	
};

#endif
