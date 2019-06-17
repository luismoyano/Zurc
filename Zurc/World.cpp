#include "pch.h"
#include <iostream>
#include <algorithm>
#include <conio.h>
#include "Instructions.h"
#include "Player.h"
#include "Room.h"
#include "Entity.h"
#include "World.h"
#include "ItemFactory.h"
#include "RoomFactory.h"


using namespace std;

World::World()
{
	player = new Player();	
	roomFactory = new RoomFactory();

	Room* origin = roomFactory->generateDungeon();

	player->setRoom(origin);
}


World::~World()
{
}

bool World::parseInput(string& input)
{
	//Lowercase input
	transform(input.begin(), input.end(), input.begin(), ::tolower);
	
	//Assume good input, only return false if the input is not within our knowledge
	bool returnable = true;

	if(input == INSTRUCTION_LOOK)
	{
		player->look();
	}
	else if (input == INSTRUCTION_UP)
	{
		player->move(input);
	}
	else if(input == INSTRUCTION_DOWN)
	{
		player->move(input);
	}
	else if(input == INSTRUCTION_LEFT)
	{
		player->move(input);
	}
	else if (input == INSTRUCTION_RIGHT)
	{
		player->move(input);
	}
	else
	{
		returnable = false;
	}

	return returnable;
}