/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:31:23 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/11 15:29:34 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed {

private:
	int					_rawBits;
	static int const	_fracBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &copy);
	Fixed	&operator=(Fixed const &rhs);
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
