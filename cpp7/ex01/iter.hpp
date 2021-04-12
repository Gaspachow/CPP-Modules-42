/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:41:31 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/12 15:14:25 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
void	iter(T *array, unsigned int len, void (*f)(T const &)) {
	if (!array)
		return;

	unsigned int i = 0;
	while (i < len)
		f(array[i++]);

	return;
}
