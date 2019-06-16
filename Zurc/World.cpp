#include "pch.h"
#include <iostream>
#include <algorithm>
#include <conio.h>
#include "Instructions.h"
#include "Player.h"
#include "Room.h"
#include "Entity.h"
#include "World.h"


using namespace std;

World::World()
{
	player = new Player();

	Room* room1 = new Room("Zucc's office", "The office of the Zucc, you work here everyday");

	player->setRoom(room1);
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
	else if (input == INSTRUCCTION_UP)
	{
		player->move(input);
	}
	else if(input == INSTRUCCTION_DOWN)
	{
		player->move(input);
	}
	else if(input == INSTRUCCTION_LEFT)
	{
		player->move(input);
	}
	else if (input == INSTRUCCTION_RIGHT)
	{
		player->move(input);
	}
	else
	{
		returnable = false;
	}

	return returnable;
}






