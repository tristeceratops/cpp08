#include <iostream>
#include <list>
#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
	MutantStack<int, std::list<int> > mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top is: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size is: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int, std::list<int> >::iterator it = mstack.begin();
	MutantStack<int, std::list<int> >::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(mstack);
	
	//list test
	std::cout << "List test" << std::endl;
	std::list<int> mlist;
	mlist.push_front(5);
	mlist.push_front(17);
	std::cout << mlist.front() << std::endl;
	mlist.pop_front();
	std::cout << mlist.size() << std::endl;
	mlist.push_front(3);
	mlist.push_front(5);
	mlist.push_front(737);
	//[...]
	mlist.push_front(0);
	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	
	return 0;
}