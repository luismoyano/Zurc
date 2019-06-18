#include "pch.h"
#include "Item.h"


Item::Item()
{
	type = ITEM;
}

Item::Item(const char * title, const char * desc, int s, int w, int d) : Entity(title, desc)
{
	Item();
	size = s;
	weight = w;
	data = d;
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

int Item::suckData()
{
	return data;
}
