#include "pch.h"
#include <iostream>
#include "Exit.h"
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
	describeName();

	cout << "This room contains: \n";

	//Describe all items
	for (Entity* e : contents)
	{
		e->describe();
		cout << "\n";
	}

	cout << "\n";
	cout << "You can see these rooms around: \n";

	//Describe the exits
	if(upExit) upExit->describeEnd(this);
	if (downExit) downExit->describeEnd(this);
	if (leftExit) leftExit->describeEnd(this);
	if (rightExit) rightExit->describeEnd(this);
	cout << "\n";
}

void Room::describeName()
{
	//Describe itself
	Entity::describe();
	cout << "\n";
}

void Room::addContent(Item * content)
{
	if(content) contents.push_back(content);
}

Item * Room::removeItem(Item * itemToRemove)
{
	Item* itemToReturn = nullptr;
	bool contains = (std::find(contents.begin(), contents.end(), itemToRemove) != contents.end());
	
	if (contains)
	{
		itemToReturn = itemToRemove;
		contents.remove(itemToRemove);
	}

	return itemToReturn;
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



