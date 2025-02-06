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
		throw std::invalid_argument("Too many numbers");
	v.push_back(n);
}


void Span::addNumber(int *begin, int *end)
{
	if (v.size() + (end - begin) > N)
		throw std::invalid_argument("Too many numbers");
	v.insert(v.end(), begin, end);
}

size_t Span::shortestSpan()
{
	size_t size = v.size();
	if (size <= 1)
		throw std::invalid_argument("Too many numbers");
	long min = -1;
	for(size_t i = 0; i < size - 1; i++){
		long s = std::abs(static_cast<long>(v[i]) - static_cast<long>(v[i + 1]));
		if (s < min || min < 0)
			min = s;
	}
	return static_cast<size_t>(min);
	
}

size_t Span::longestSpan()
{
	size_t size = v.size();
	if (size <= 1)
		throw std::exception();
	long max = -1;
	for(size_t i = 0; i < size - 1; i++){
		long s = std::abs(static_cast<long>(v[i]) - static_cast<long>(v[i + 1]));
		if (s > max)
			max = s;
	}
	return static_cast<size_t>(max);
	
}

