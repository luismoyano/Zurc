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

	mode = NORMAL;
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

	switch (mode)
	{
	case NORMAL:
		returnable = parseNormal(input);
		break;
	case PICKING:
		parsePicking(input);
		mode = NORMAL;
		break;
	case EMBEDDING:
		parseEmbedding(input);
		mode = NORMAL;
		break;
	}

	return returnable;
}


bool World::parseNormal(string & input)
{
	bool returnable = true;

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
		mode = PICKING;
	}
	else if (input == INSTRUCTION_HAND)
	{
		player->hand();

	}
	else if (input == INSTRUCTION_DROP)
	{
		player->drop();

	}
	else if (input == INSTRUCTION_EMBED)
	{
		if(player->hasSomethingToEmbed())
		{
			cout << "What do you want to embed?\n";
			mode = EMBEDDING;
		}
		else
		{
			cout << "I can't embed this item with anything";
		}
	}
	else
	{
		returnable = false;
	}

	return returnable;
}

void World::parsePicking(string & input)
{
	if (player->pickItemByName(input))
	{
		cout << "Item " << input << " picked succesfully\n";
	}
	else
	{
		cout << "The item " << input << " can't be picked\n";
	}
}

void World::parseEmbedding(string & input)
{
	if (player->embedItemByName(input))
	{
		cout << "Item embedded succesfully, use hand command to look at your item\n";
	}
	else
	{
		cout << "The itams couldn't be embedded ):\n";
	}
}
