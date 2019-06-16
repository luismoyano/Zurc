#pragma once
#include "Entity.h"
#include <list>

using namespace std;

class Entity;

class Room : public Entity
{
public:
	Room();
	Room(const char* title, const char* desc);
	~Room();

	void describe();

private:
	list<Entity*> contents;
};

