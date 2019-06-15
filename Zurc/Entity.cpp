#include "pch.h"
#include <string>
#include "Entity.h"

using namespace std;

Entity::Entity()
{
}

Entity::Entity(char* name, char* desc) :
	name(name), description(desc)
{
}


Entity::~Entity()
{
}
