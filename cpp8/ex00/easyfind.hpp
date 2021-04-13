/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:34:30 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/13 17:00:13 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <algorithm>
# include <iterator>

template <typename T>
int	easyfind(T &container, int n) {
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		return (-1);
	else
		return (std::distance(container.begin(), iter));
}

#endif
