// The Zurc.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "World.h"

using namespace std;

#define INPUT_START "\n>";


int main()
{
	string input;
	

	World* world = new World();

	cout << "Welcome to the Zurc! Let's go! We need to Succ";
	cout << INPUT_START;

	while (1)
	{
		cin >> input;

		if (!world->parseInput(input))
		{
			cout << "The Zucc doesn't get it!!";
		}

		cout << INPUT_START;
	}
}

