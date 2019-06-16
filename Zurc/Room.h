#pragma once
#include "Entity.h"
class Room :
	public Entity
{
public:
	Room();
	Room(char* title, char* desc);
	~Room();
};

