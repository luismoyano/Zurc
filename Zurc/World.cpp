#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "World.h"

using namespace std;


World::World()
{
}


World::~World()
{
}

bool World::parseInput(string& input)
{
	//Assume good input, only return false if the input is not within our knowledge
	bool returnable = true;

	if(input == "look")
	{
		cout << "The Zucc loocc";
	}

	return returnable;
}






