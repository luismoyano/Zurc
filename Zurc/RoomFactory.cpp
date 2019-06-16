#include "pch.h"
#include "Room.h"
#include "Exit.h"
#include "Globals.h"
#include "ItemFactory.h"
#include "RoomFactory.h"


RoomFactory::RoomFactory()
{
	factory = new ItemFactory();

	Room* r1 = new Room("storage_room", "Here some nice things are stored, you'll never know");
	rooms.push_back(r1);

	Room* r2 = new Room("office_room", "Office space, anything's allowed here");
	rooms.push_back(r2);

	Room* r3 = new Room("meeting_room", "Here we hold meetings!");
	rooms.push_back(r3);

	Room* r4 = new Room("chilling_room", "A room to chill out");
	rooms.push_back(r4);

	Room* r5 = new Room("Kitchen", "A room to eat");
	rooms.push_back(r5);

	Room* r6 = new Room("restroom", "A room where humans do things alone");
	rooms.push_back(r6);

	Room* r7 = new Room("terrace", "A place to chill outside");
	rooms.push_back(r7);

	Room* r8 = new Room("gardens", "A place to chill super outside");
	rooms.push_back(r8);

	Room* r9 = new Room("secret_room", "Who knows?");
	rooms.push_back(r9);

}


RoomFactory::~RoomFactory()
{
}

Room* RoomFactory::getRandomRoom()
{
	return *Globals::getRandom(rooms.begin(), 9);
}
