#include "pch.h"
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player()
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
	cout << "The Zucc moves " << direction;
}

