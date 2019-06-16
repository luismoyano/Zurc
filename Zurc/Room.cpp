#include <iostream>
#include "pch.h"
#include "Room.h"


Room::Room()
{
	type = ROOM;
}

Room::Room(char * title, char * desc) : Entity(title, desc)
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

	cout << "This room contains: \n";

	//Describe all items
	for (Entity* e : contents)
	{
		e->describe();
		cout << "\n";
	}
}
