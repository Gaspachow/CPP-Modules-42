/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:33:15 by gsmets            #+#    #+#             */
/*   Updated: 2021/04/14 18:07:03 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <string>

int 	main() {
	MutantStack<int>	mstack;
	std::list<int>		aList;
	srand(time(0)); // New random seed every second

	std::cout << "--- pushing 5 and 17 to the mstack/list and checking their size() and top() ---" << std::endl;
		mstack.push(5);
		mstack.push(17);
		aList.push_back(5);
		aList.push_back(17);

		std::cout << "mstack Size is: " << mstack.size() << " | aList Size is: " << aList.size() << std::endl;
		std::cout << "mstack Top is: " << mstack.top() << " | aList Top is: " << aList.back() << std::endl;
	std::cout << std::endl;

	std::cout << "--- using pop() and checking again ---" << std::endl;
		mstack.pop();
		aList.pop_back();

		std::cout << "mstack Size is: " << mstack.size() << " | aList Size is: " << aList.size() << std::endl;
		std::cout << "mstack Top is: " << mstack.top() << " | aList Top is: " << aList.back() << std::endl;
	std::cout << std::endl;

	std::cout << "--- We Push multiple values ---" << std::endl;
		int tmp;
		for (int i = 0; i < 10; i++) {
			tmp = rand() % 1000;
			mstack.push(tmp); 
			aList.push_back(tmp);
		}
		
		std::cout << "mstack Size is: " << mstack.size() << " | aList Size is: " << aList.size() << std::endl;
		std::cout << "mstack Top is: " << mstack.top() << " | aList Top is: " << aList.back() << std::endl;
	std::cout << std::endl;

	std::cout << "--- We create iterators and display the values of the list and mstack ---" << std::endl;
		MutantStack<int>::iterator 	mIter = mstack.begin();
		MutantStack<int>::iterator 	mEnd = mstack.end();
		std::list<int>::iterator	lIter = aList.begin();
		std::list<int>::iterator	lEnd = aList.end();

		++lIter;
		--lIter;
		std::cout << "List:" << std::endl;
		while (lIter != lEnd) {
			std::cout << *lIter << std::endl;
			lIter++;
		}

		std::cout << std::endl;

		++mIter;
		--mIter;
		std::cout << "MutantStack:" << std::endl;
		while (mIter != mEnd) {
			std::cout << *mIter << std::endl;
			mIter++;
		}

	std::cout << std::endl;

	std::cout << "--- Testing the empty() member function ---" << std::endl;
		MutantStack<int>	mEmpty;
		std::list<int>		lEmpty;

		std::cout << "mstack empty() return is: " << mstack.empty() << std::endl;
		std::cout << "aList empty() return is: " << aList.empty() << std::endl;
		std::cout << "empty mstack empty() return is: " << mEmpty.empty() << std::endl;
		std::cout << "empty aList empty() return is: " << lEmpty.empty() << std::endl;
	std::cout << std::endl;

	std::cout << "--- We create a Stack<int> copy of mstack and compare them ---" << std::endl;
		std::stack<int>				copy(mstack);

		std::cout << "mstack Size is: " << mstack.size() << " | Stack copy Size is: " << copy.size() << std::endl;
		std::cout << "mstack Top is: " << mstack.top() << " | Stack copy Top is: " << copy.top() << std::endl;

	std::cout << std::endl;

	return (0);
}
