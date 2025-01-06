#pragma once
#include <algorithm>

template <typename T> void *easyfind(T &container, int value) {
  typename T::iterator it = std::find(container.begin(), container.end(), value);
  if (it == container.end())
	throw std::exception();
  return &(*it);
}