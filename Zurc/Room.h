#ifndef __Room__
#define __Room__

#include "Entity.h"
#include "Item.h"
#include <list>

using namespace std;

class Entity;
class Exit;

class Room : public Entity
{
public:
	Room();
	Room(const char* title, const char* desc);
	~Room();

	void describe();
	void describeName();
	void addContent(Item* content);
	Item* removeItem(Item* itemToRemove);

	bool hasDeadEnds();
	void setExitToNextAvailableEnd(Exit* e);

	Exit * upExit;
	Exit * downExit;
	Exit * leftExit;
	Exit * rightExit;
	list<Item*> contents;


};
#endif
