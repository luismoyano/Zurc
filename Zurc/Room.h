#pragma once
#include "Entity.h"
#include <list>

using namespace std;

class Entity;

class Room : public Entity
{
public:
	Room();
	Room(char* title, char* desc);
	~Room();

	void describe();

private:
	list<Entity*> contents;
};

