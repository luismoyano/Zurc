#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <ctime>
#include "World.h"

using namespace std;

#define INPUT_START "\n>";


int main()
{
	//init the rng
	srand(time(NULL));

	string input;

	World* world = new World();

	cout << "Welcome to the Zurc! Let's go! We need to Succ";
	cout << INPUT_START;

	while (1)
	{
		cin >> input;

		if (input == "exit") break;
		else if (!world->parseInput(input))
		{
			cout << "The Zucc doesn't get it!!";
		}
		

		cout << INPUT_START;
	}
	
	return 0;
}

