#include "pch.h"
#include <vector>
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

	//Populate rooms
	for (Room* r : rooms)
	{
		for (size_t i = 0; i < MAX_AMOUNT_OF_EXITS_IN_A_ROOM; i++)
		{
			r->addContent(factory->getRandomItem());
		}
	}
}


RoomFactory::~RoomFactory()
{
	for (vector<Room*>::iterator it = rooms.begin(); it != rooms.end(); ++it)
	{
		delete *it;
	}
	rooms.clear();
}

Room * RoomFactory::generateDungeon()
{
	//setup the exits
	Exit* e1 = new Exit();
	e1->setEnds(rooms.at(0), rooms.at(1));

	rooms.at(0)->rightExit = e1;
	rooms.at(1)->leftExit = e1;

	Exit* e2 = new Exit();
	e2->setEnds(rooms.at(1), rooms.at(2));

	rooms.at(1)->rightExit = e2;
	rooms.at(2)->leftExit = e2;

	Exit* e3 = new Exit();
	e3->setEnds(rooms.at(0), rooms.at(3));

	rooms.at(0)->downExit = e3;
	rooms.at(3)->upExit = e3;

	Exit* e4 = new Exit();
	e4->setEnds(rooms.at(1), rooms.at(4));

	rooms.at(1)->downExit = e4;
	rooms.at(4)->upExit = e4;

	Exit* e5 = new Exit();
	e5->setEnds(rooms.at(2), rooms.at(5));

	rooms.at(2)->downExit = e5;
	rooms.at(5)->upExit = e5;

	Exit* e6 = new Exit();
	e6->setEnds(rooms.at(3), rooms.at(4));

	rooms.at(3)->rightExit = e6;
	rooms.at(4)->leftExit = e6;

	Exit* e7 = new Exit();
	e7->setEnds(rooms.at(4), rooms.at(5));

	rooms.at(4)->rightExit = e7;
	rooms.at(5)->leftExit = e7;

	Exit* e8 = new Exit();
	e8->setEnds(rooms.at(3), rooms.at(6));

	rooms.at(3)->downExit = e8;
	rooms.at(6)->upExit = e8;

	Exit* e9 = new Exit();
	e9->setEnds(rooms.at(4), rooms.at(7));

	rooms.at(4)->downExit = e9;
	rooms.at(7)->upExit = e9;

	Exit* e10 = new Exit();
	e10->setEnds(rooms.at(5), rooms.at(8));

	rooms.at(5)->downExit = e10;
	rooms.at(8)->upExit = e10;

	Exit* e11 = new Exit();
	e11->setEnds(rooms.at(6), rooms.at(7));

	rooms.at(6)->rightExit = e11;
	rooms.at(7)->leftExit = e11;

	Exit* e12 = new Exit();
	e12->setEnds(rooms.at(7), rooms.at(8));

	rooms.at(7)->rightExit = e12;
	rooms.at(8)->leftExit = e12;



	return rooms.at(0);
}



