#include <iostream>
#include <list>
#include <vector>
#include <deque>
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
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "top is: " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "size is: " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);
	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	//vector test
	std::cout << "List test" << std::endl;
	std::vector<int> mVector;
	mVector.push_back(5);
	mVector.push_back(17);
	std::cout << mVector.back() << std::endl;
	mVector.pop_back();
	std::cout << mVector.size() << std::endl;
	mVector.push_back(3);
	mVector.push_back(5);
	mVector.push_back(737);
	//[...]
	mVector.push_back(0);
	std::vector<int>::iterator Vit = mVector.begin();
	std::vector<int>::iterator Vite = mVector.end();
	++Vit;
	--Vit;
	while (Vit != Vite)
	{
		std::cout << *Vit << std::endl;
		++Vit;
	}
	
	return 0;
}