#ifndef __Entity__
#define __Entity__

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

protected:
	EntityType type;
	string name;
	string description;
};

#endif