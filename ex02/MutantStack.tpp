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
	return this->c.begin();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::iterator MutantStack<Type, Container>::end()
{
	return this->c.end();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::const_iterator MutantStack<Type, Container>::begin() const
{
	return this->c.begin();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::const_iterator MutantStack<Type, Container>::end() const
{
	return this->c.end();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::reverse_iterator MutantStack<Type, Container>::rbegin()
{
	return this->c.rbegin();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::reverse_iterator MutantStack<Type, Container>::rend()
{
	return this->c.rend();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::const_reverse_iterator MutantStack<Type, Container>::rbegin() const
{
	return this->c.rbegin();
}

template <class Type, class Container>
typename MutantStack<Type, Container>::const_reverse_iterator MutantStack<Type, Container>::rend() const
{
	return this->c.rend();
}