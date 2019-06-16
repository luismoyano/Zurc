#include "pch.h"
#include <iostream>
#include <algorithm>
#include <conio.h>
#include "Instructions.h"
#include "Player.h"
#include "Entity.h"
#include "World.h"


using namespace std;

World::World()
{
	player = new Player();

	
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
		cout << "The Zucc loocc";
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






