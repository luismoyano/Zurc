#pragma once
#include "Entity.h"
class Item :
	public Entity
{
public:
	Item();
	Item(const char* title, const char* desc, int size, int weight);
	~Item();

	int getSize();
	int getWeight();

private:
	int size;
	int weight;
};

