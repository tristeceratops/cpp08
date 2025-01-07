#pragma once
#include <exception>
#include <vector>

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
		int shortestSpan();
		int longestSpan();
};
