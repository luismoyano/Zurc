#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <conio.h>
#include "World.h"
#include "Instructions.h"

using namespace std;


World::World()
{
}


World::~World()
{
}

bool World::parseInput(string& input)
{
	//Lowercase input
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	
	//Assume good input, only return false if the input is not within our knowledge
	bool returnable = true;

	if(input == INSTRUCTION_LOOK)
	{
		cout << "The Zucc loocc";
	}
	else if (input == INSTRUCCTION_UP)
	{

	}
	else if(input == INSTRUCCTION_DOWN)
	{
	}
	else if(input == INSTRUCCTION_LEFT)
	{
	}
	else if (input == INSTRUCCTION_RIGHT)
	{

	}
	else
	{
		returnable = false;
	}

	return returnable;
}






