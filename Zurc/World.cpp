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

	pickMode = false;
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

	if (!pickMode)
	{
		if (input == INSTRUCTION_LOOK)
		{
			player->look();
		}
		else if (input == INSTRUCTION_UP)
		{
			player->move(input);
		}
		else if (input == INSTRUCTION_DOWN)
		{
			player->move(input);
		}
		else if (input == INSTRUCTION_LEFT)
		{
			player->move(input);
		}
		else if (input == INSTRUCTION_RIGHT)
		{
			player->move(input);
		}
		else if (input == INSTRUCTION_PICKUP)
		{
			cout << "What do you want to pickup?\n";
			pickMode = true;
		}
		else if (input == INSTRUCTION_HAND)
		{
			player->hand();
			
		}
		else
		{
			returnable = false;
		}
	}
	else
	{
		//pickup
		if (player->pickItemByName(input))
		{
			cout << "Item " << input << " picked succesfully\n";
		}
		else
		{
			cout << "The item " << input << " can't be picked\n";
		}
		pickMode = false;
	}
	return returnable;
}
