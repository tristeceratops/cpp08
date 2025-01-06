#include "easyfind.hpp"
#include <vector>
#include <list>
#include <map>
#include <iostream>

int main()
{
	// std::map<int, std::string> map;
	// map[1] = "one";
	// map[2] = "two";
	// map[3] = "three";

	// std::string *str = static_cast<std::string*>(easyfind(map, 2));

	// std::cout << *str << std::endl;

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	int *i = static_cast<int*>(easyfind(vec, 2));

	std::cout << *i << std::endl;
}