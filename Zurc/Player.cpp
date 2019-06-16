#include "pch.h"
#include <iostream>
#include <string>
#include "Room.h"
#include "Player.h"

using namespace std;

Player::Player()
{
	name = "The Zucc";
	description = "You're the Zucc and you're mission is to succ all the people's data through your app!";
	type = PLAYER;
}

Player::Player(char* title, char* desc, Room* room) : Entity(title, desc)
{
	type = PLAYER;
	currentRoom = room;
}


Player::~Player()
{
	if(currentRoom)
	{
		currentRoom->describe();
	}
}

void Player::look()
{
}

void Player::move(string & direction)
{
	cout << name << " moves " << direction;
}

