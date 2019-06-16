#ifndef __ItemFactory__
#define __ItemFactory__

#include <list>
#include "Item.h"

using namespace std;

class Player;

class ItemFactory
{
public:
	ItemFactory();
	~ItemFactory();

	Item* getRandomItem();

private:
	list<Item*> items;
};
#endif
