#include "pch.h"
#include <iostream>
#include "Room.h"


Room::Room()
{
	type = ROOM;
}

Room::Room(const char * title, const char * desc) : Entity(title, desc)
{
	Room();
}


Room::~Room()
{
}

void Room::describe()
{
	//Describe itself
	Entity::describe();
	cout << "\n";

	cout << "This room contains: \n";

	//Describe all items
	for (Entity* e : contents)
	{
		e->describe();
		cout << "\n";
	}
}

void Room::addContent(Entity * content)
{
	if(content) contents.push_back(content);
}

bool Room::hasDeadEnds()
{
	return (!upExit || !downExit || !leftExit || !rightExit);
}

void Room::setExitToNextAvailableEnd(Exit * e)
{
	if (!upExit) upExit = e;
	else if (!leftExit) leftExit = e;
	else if (!downExit) downExit = e;
	else if (!rightExit) rightExit = e;
}



