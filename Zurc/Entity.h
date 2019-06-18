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
	Entity(const char* name, const char* desc);
	~Entity();

	void describe();
	string* getName();

protected:
	EntityType type;
	string name;
	string description;
};

#endif