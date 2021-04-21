/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:23:46 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/14 15:49:00 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <cstdlib>

Span::Span(unsigned int N) : _N(N) {
	return;
}

Span::Span(Span const &copy) {
	*this = copy;
	return;
}

Span::~Span() {
	return;
}

Span			&Span::operator=(Span const &rhs) {
	_N = rhs._N;
	_list = rhs._list;
	return (*this);
}

void		Span::addNumber(int n) {
	if (_list.size() == _N)
		throw std::length_error("List is already full.");
	_list.push_back(n);
	return;
}

long			Span::shortestSpan() {
	if (_list.size() < 2)
		throw std::logic_error("Need minimum two numbers to find a span.");
	
	_list.sort();

	std::list<int>::iterator next = _list.begin();
	std::list<int>::iterator iter = next++;
	std::list<int>::iterator end = _list.end();

	long min = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
	long tmp;
	while (next != end)
	{
		tmp = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
		if (tmp < min)
			min = tmp;
	}

	return (min);
}

long			Span::longestSpan() const {
	if (_list.size() < 2)
		throw std::logic_error("Need minimum two numbers to find a span.");

	long min = *std::min_element(_list.begin(), _list.end());
	long max = *std::max_element(_list.begin(), _list.end());
	return (max - min);
}
