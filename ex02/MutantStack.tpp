#include "MutantStack.hpp"

template <class Type, class Container>
MutantStack<Type, Container>::MutantStack() : std::stack<Type, Container>() {}

template <class Type, class Container>
MutantStack<Type, Container>::MutantStack(const MutantStack &copy) : std::stack<Type, Container>(copy) {}

template <class Type, class Container>
MutantStack<Type, Container>::~MutantStack() {}

template <class Type, class Container>
MutantStack<Type, Container> &MutantStack<Type, Container>::operator=(const MutantStack &rhs)
{
	if (this == &rhs)
		return *this;
	std::stack<Type, Container>::operator=(rhs);
	return *this;
}

template <class Type, class Container>
typename MutantStack<Type, Container>::iterator MutantStack<Type, Container>::begin()
{
	return this->c.rbegin();
}