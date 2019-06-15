#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <conio.h>
#include "World.h"
#include "Instructions.h"
#include "Player.h"

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






