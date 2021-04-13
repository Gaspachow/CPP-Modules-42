/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:23:27 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/13 19:56:03 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H
# include <list>
# include <algorithm>
# include <iterator>
# include <exception>
# include <iostream>

class Span {

private:
	unsigned int	_N;
	std::list<int>	_list;
	Span(); // can't create a span without N specified

public:
	Span(unsigned int N);
	Span(Span const &copy);
	virtual ~Span();

	Span	&operator=(Span const &rhs);

	void	addNumber(int n);
	long	shortestSpan();
	long	longestSpan() const;

	template <class Iter>
	void	addNumber(Iter begin, Iter end) {
		int sizeLeft = static_cast<int>(_N) - static_cast<int>(_list.size());
		if (std::distance(begin, end) > sizeLeft)
			throw std::length_error("Tried to add too many ints to list.");
		else
			_list.insert(_list.begin(), begin, end);
	}
};

#endif
