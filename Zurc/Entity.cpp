#include "pch.h"
#include <string>
#include <iostream>
#include "Entity.h"

using namespace std;

Entity::Entity()
{
}

Entity::Entity(const char* name, const char* desc) :
	name(name), description(desc)
{
}


Entity::~Entity()
{
}

void Entity::describe()
{
	cout << name << " " << description;
}

string* Entity::getName()
{
	return &name;
}
