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
