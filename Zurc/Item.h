#ifndef __Item__
#define __Item__

#include "Entity.h"

#define EMBED_SYMBOL "++"

class Item :
	public Entity
{
public:
	Item();
	Item(const char* title, const char* desc, int size, int weight, int data);
	~Item();

	int getSize();
	int getWeight();

	bool embed(Item* item);
	int suckData();

private:
	bool hasEmbed;
	int size;
	int weight;
	int data;
};

#endif
