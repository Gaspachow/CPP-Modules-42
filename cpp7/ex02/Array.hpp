/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:37:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/12 16:40:14 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

template <typename T>
class Array {
private:
	T 			*_arr;
	unsigned int _size;

public:
	Array(): _arr(NULL), _size(0) {}
	Array(unsigned int n): _arr(new T[n]), _size(n) {}
	Array(Array const &copy): _arr(NULL) { *this = copy; }
	~Array() { delete[] _arr; }

	Array			&operator=(Array &rhs) {
		if (this == &rhs)
			return (*this);

		delete[] _arr;
		_arr = new T[rhs.size()];
		_size = rhs.size();
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
		return (*this);
	}

	class			ArrayUnreachable : public std::exception {
		public:
			const char	*what() const throw() {
				return ("Tried to access unreachable value");
			};
	};

	T				&operator[](unsigned int i) const {
		if (i < 0 || i >= _size)
			throw ArrayUnreachable();
		return(_arr[i]);
	}

	unsigned int	size() const { return (this->_size); }
};

#endif
