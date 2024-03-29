#include "pch.h"
#include <iostream>
#include <string>
#include "Room.h"
#include "Exit.h"
#include "Item.h"
#include "Player.h"
#include "Instructions.h"

using namespace std;

Player::Player()
{
	name = "The Zucc";
	description = "You're the Zucc and you're mission is to succ all the people's data through your app!";
	type = PLAYER;

	strength = 5;
	capacity = 4;
}

Player::Player(char* title, char* desc, Room* room) : Entity(title, desc)
{
	type = PLAYER;
	currentRoom = room;
}


Player::~Player()
{
}

void Player::setRoom(Room * room)
{
	if (room) currentRoom = room;
}

void Player::look()
{
	cout << "The Zucc loocc\n";

	if (currentRoom)
	{
		currentRoom->describe();
	}
}

void Player::move(string & direction)
{
	cout << name << " moves " << direction <<" \n";

	if (direction == INSTRUCTION_UP && currentRoom->upExit)
	{
		currentRoom = currentRoom->upExit->getOrigin(currentRoom);
	}
	else if (direction == INSTRUCTION_DOWN && currentRoom->downExit)
	{
		currentRoom = currentRoom->downExit->getOrigin(currentRoom);
	}
	else if (direction == INSTRUCTION_LEFT && currentRoom->leftExit)
	{
		currentRoom = currentRoom->leftExit->getOrigin(currentRoom);
	}
	else if (direction == INSTRUCTION_RIGHT && currentRoom->rightExit)
	{
		currentRoom = currentRoom->rightExit->getOrigin(currentRoom);
	}
	else
	{
		cout << "There's nothing in that direction";
	}
}

bool Player::pickItemByName(string & input)
{
	bool picked = false;

	for (Item* item: currentRoom->contents)
	{
		int weight = item->getWeight();
		int size = item->getSize();
		string* name = item->getName();
		if (input == *name && 
			weight <= strength && 
			size <= capacity &&
			!pickedItem
			)
		{
			pickedItem = currentRoom->removeItem(item);
			picked = true;
			break;
		}
	}

	return picked;
}

void Player::hand()
{
	if(pickedItem)
	{
		cout << "I have " << *pickedItem->getName() << " in my hand";
	}
	else
	{
		cout << "My hands are empty";
	}
}

void Player::drop()
{
	

	if (pickedItem)
	{
		cout << "I drop " << *pickedItem->getName();
		
		currentRoom->addContent(pickedItem);
		pickedItem = nullptr;	
	}
	else
	{
		cout << "I have no items to drop";
	}
	
}

bool Player::hasSomethingToEmbed()
{
	return (pickedItem && pickedItem->getData() > 0);
}

bool Player::embedItemByName(string & input)
{
	bool returnable = false;

	if (hasSomethingToEmbed())
	{
		for (Item* item : currentRoom->contents)
		{
			int data = item->getData();

			if (input == *item->getName() && data > 0)
			{
				Item* it = currentRoom->removeItem(item);
				pickedItem->setEmbed(data);
				returnable = true;
				break;
			}
		}
	}
	return returnable;
}

void Player::suck()
{
	int data = 0;

	if (pickedItem && (data = pickedItem->getData()) > 0)
	{
		strength += data / 2;
		capacity += data / 2;
		delete(pickedItem);
		pickedItem = nullptr;

		cout << "Mmmm! Delicious bits! The Zucc is now stronger!\n";
	}
	else
	{
		cout << "The Zucc can't succ );\n";
	}
}

