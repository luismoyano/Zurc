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

	hasEmbed = false;
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

int Item::getData()
{
	return data;
}

void Item::setEmbed(int itemData)
{
	hasEmbed = true;
	data += itemData;
}

string* Item::getName()
{
	string* n = new string(name);

	if (hasEmbed)
	{
		n->append("++");
	}

	return n;
}