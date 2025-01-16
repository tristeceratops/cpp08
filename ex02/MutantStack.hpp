#pragma once

#include <stack>
#include <deque>
#include <iterator>


template <class Type, class Container = std::deque<Type> >
class MutantStack : public std::stack<Type, Container>
{;
	public:
		typedef typename Container::iterator reverse_iterator;
		typedef typename Container::reverse_iterator iterator;
		typedef typename Container::const_reverse_iterator const_iterator;
		typedef typename Container::const_iterator const_reverse_iterator;

		MutantStack();
		MutantStack(const MutantStack &copy);

		~MutantStack();

		MutantStack &operator=(const MutantStack &rhs);

		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;


};