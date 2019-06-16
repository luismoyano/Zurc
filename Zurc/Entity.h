#ifndef __Entity__
#define __Entity__

#include <string>


using namespace std;

enum EntityType
{
	ENTITY,
	ROOM,
	EXIT,
	ITEM,
	CREATURE,
	PLAYER
};

class Entity
{
public:
	Entity();
	Entity(char* name, char* desc);
	~Entity();

	void describe();

protected:
	EntityType type;
	string name;
	string description;
};

#endif