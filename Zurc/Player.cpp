#include "pch.h"
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player()
{
	name = "The Zucc";
	description = "You're the Zucc and you're mission is to succ all the people's data through your app!";
	type = PLAYER;
}

Player::Player(char* title, char* desc) : Entity(title, desc)
{

}


Player::~Player()
{
}

void Player::look()
{
}

void Player::move(string & direction)
{
	cout << name << " moves " << direction;
}

