#include "Span.hpp"
#include <iostream>
#include <vector>
#include <limits>

int main()
{
	srand(time(0));
	int max = 50000;
	int min = 0;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span bigSp = Span(25000);
	std::vector<int> v(15000);

	for (int i = 0; i < 15000; ++i)
		v[i] = rand() % (max - min + 1) + min;
	bigSp.addNumber(&v[0], &v[15000]);
	
	std::cout << bigSp.shortestSpan() << std::endl;
	std::cout << bigSp.longestSpan() << std::endl;
	
	Span rangeSp = Span(15000);
	rangeSp.addNumber(v.begin(), v.end());
	
	std::cout << rangeSp.shortestSpan() << std::endl;
	std::cout << rangeSp.longestSpan() << std::endl;
	
	try
	{
		sp.addNumber(54);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		bigSp.addNumber(&v[0], &v[15000]);
		bigSp.addNumber(&v[0], &v[15000]);
		bigSp.addNumber(&v[0], &v[15000]);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span limitSpan(10);
		limitSpan.addNumber(std::numeric_limits<int>::min());
		limitSpan.addNumber(std::numeric_limits<int>::max()); 
		limitSpan.addNumber(std::numeric_limits<int>::min());
		std::cout << limitSpan.shortestSpan() << std::endl;
		std::cout << limitSpan.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	return 0;
}
