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

		iterator begin() { return this->c.rbegin(); }
		iterator end() { return this->c.rend(); }

		const_iterator begin() const { return this->c.rbegin(); }
		const_iterator end() const { return this->c.rend(); }

		reverse_iterator rbegin() { return this->c.begin(); }
		reverse_iterator rend() { return this->c.end(); }

		const_reverse_iterator rbegin() const { return this->c.begin(); }
		const_reverse_iterator rend() const { return this->c.end(); }


};