#pragma once
#include <exception>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int N;
		std::vector<int> v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &span);

		~Span();

		Span &operator=(const Span &span);

		void addNumber(int n);
		void addNumber(int *begin, int *end);
		template <typename InputIterator>
		void addNumber(InputIterator begin, InputIterator end){
			while (begin != end)
			{
				if (v.size() >= N)
				{
					throw std::exception();
				}
				v.push_back(*begin);
				++begin;
			}
		}
		size_t shortestSpan();
		size_t longestSpan();
};
