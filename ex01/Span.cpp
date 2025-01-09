#include "Span.hpp"

Span::Span() : N(0), v(std::vector<int>()) {}

Span::Span(unsigned int N) : N(N), v(std::vector<int>()) {}

Span::Span(const Span &span) : N(span.N), v(span.v) {}

Span::~Span() {}

Span &Span::operator=(const Span &span)
{
	if (this == &span)
		return *this;
	N = span.N;
	v = span.v;
	return *this;
}

void Span::addNumber(int n)
{
	if (v.size() >= N)
		throw std::exception();
	v.push_back(n);
}


void Span::addNumber(int *begin, int *end)
{
	if (v.size() + (end - begin) > N)
		throw std::exception();
	v.insert(v.end(), begin, end);
}

int Span::shortestSpan()
{
	unsigned int size = v.size();
	if (size <= 1)
		throw std::exception();
	int min = -1;
	for(unsigned int i = 0; i < size - 1; i++){
		int s = abs(v[i] - v[i + 1]);
		if (s < min || min < 0)
			min = s;
	}
	return min;
	
}

int Span::longestSpan()
{
	unsigned int size = v.size();
	if (size <= 1)
		throw std::exception();
	int max = -1;
	for(unsigned int i = 0; i < size - 1; i++){
		int s = abs(v[i] - v[i + 1]);
		if (s > max)
			max = s;
	}
	return max;
	
}

