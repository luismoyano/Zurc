#ifndef __Globals__
#define __Globals__

#include <list>
#include <cstdlib>
#include <iterator>
#include <algorithm>

class Globals
{
public:
	Globals();
	~Globals();

	template <typename T>
	static T getRandom(T begin, int length)
	{
		int randomNumber = rand() % length;
		auto it = begin;
		advance(it, randomNumber);

		return it;
	}
};
#endif