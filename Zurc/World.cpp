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
	else if (input == INSTRUCTION_SUCK)
	{
		player->suck();
	}
	else if (input == INSTRUCTION_HELP)
	{
		help();
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

void World::help()
{
	cout << "Welcome to Zurc!\n";
	cout << "\n";

	cout << "You are the Zucc, your mission is to suck private data from digital devices\n";
	cout << "The more data you suck, the stronger you get\n";
	cout << "\n";

	cout << "Commands you can do\n";
	cout << "\n";

	cout << "up, down, left, rigth: Move yourself through the rooms\n";
	cout << "\n";
	cout << "look: Shows you the room, the contents and the neighbor rooms\n";
	cout << "\n";
	cout << "pick: Allows you to pick items, keep in mind you can't carry heavy items!\n";
	cout << "\n";
	cout << "drop: Allows you to drop the item in your hand, it will rest in the room you're in at each moment\n";
	cout << "\n";
	cout << "hand: Shows you the item you're carrying right now\n";
	cout << "\n";
	cout << "embed: embed one item into the one in your hand, keep in mind you can only embed items with data together, the item in your hand becomes a lot more data-filled\n";
	cout << "\n";
	cout << "succ: Sucks the data of the item in your hand, destroys the item and makes you stronger in exchange\n";
	cout << "\n";
	cout << "help: Shows this menu\n";

}
