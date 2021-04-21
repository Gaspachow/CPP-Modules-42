/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:03:52 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/14 18:03:49 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack() : std::stack<T>() { };
	MutantStack(MutantStack &copy) : std::stack<T>() {*this = copy;};
	virtual ~MutantStack() { };

	MutantStack	&operator=(MutantStack &rhs) {std::stack<T>::operator=(rhs); return (*this);};

	iterator	end() {return(this->c.end());};
	iterator	begin() {return(this->c.begin());};
};

#endif
