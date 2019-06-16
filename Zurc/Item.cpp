#include "pch.h"
#include "Item.h"


Item::Item()
{
	type = ITEM;
}

Item::Item(const char * title, const char * desc, int size, int weight) : Entity(title, desc)
{
	Item();
	size = size;
	weight = weight;
}


Item::~Item()
{
}

int Item::getSize()
{
	return size;
}

int Item::getWeight()
{
	return weight;
}
