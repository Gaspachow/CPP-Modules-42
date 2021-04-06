/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:00:28 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/06 17:20:07 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CLASS_H
# define SCALAR_CLASS_H
# include <string>

class Scalar {

public:
	Scalar();
	Scalar(Scalar const &copy);
	virtual ~Scalar();

	Scalar		&operator=(Scalar const &rhs);

	std::string	findType(std::string literal) const;
	void		print(char c) const;
	void		print(int i) const;
	void		print(float f) const;
	void		print(double i) const;
};

#endif
