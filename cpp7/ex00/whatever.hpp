/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:40:16 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/12 14:35:07 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
void	swap(T &a, T &b) {
	T tmp = a;

	a = b;
	b = tmp;

	return;
}

template < typename T >
T 		min(T &a, T &b) {
	return (a < b ? a : b);
}

template < typename T >
T 		max(T &a, T &b) {
	return (a > b ? a : b);
}


// This class is required for correction and testing

class Awesome {
private:
	int _n;

public:
Awesome():_n(0){}
Awesome( int n ) : _n( n ) {}

bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

int	getN() const { return (this->_n); }
};
