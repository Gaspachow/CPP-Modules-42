/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:24:54 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/08 18:02:20 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H
# include <iostream>
# include <string>

class Brain {

private:
	int	_neurons;

public:
	Brain();
	~Brain();
	std::string identify() const;
	int			getNeurons() const;
};

#endif
