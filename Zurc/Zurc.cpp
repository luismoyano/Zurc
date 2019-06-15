// The Zurc.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "World.h"

using namespace std;


int main()
{
	string input;
	string INPUT_START = "\n>";

	World* world = new World();

	cout << "Welcome to the Zurc! Let's go! We need to Succ";

	while (1)
	{
		cout << INPUT_START;
		cin >> input;

		if (!world->parseInput(input))
		{
			cout << "The Zucc doesn't get it!!";
		}

		cout << INPUT_START;
	}
}

