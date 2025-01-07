#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	int *i = static_cast<int*>(easyfind(vec, 2));

	std::cout << *i << std::endl;

	std::list<int> lst;

	lst.push_back(14);
	lst.push_back(17);
	lst.push_back(2);
	lst.push_back(17);
	try
	{
		int *j = static_cast<int*>(easyfind(vec, 24));
		std::cout << *j << std::endl;
		j = static_cast<int*>(easyfind(vec, 17));
		std::cout << *j << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


}