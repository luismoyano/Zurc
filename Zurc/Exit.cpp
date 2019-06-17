#include "pch.h"
#include "Room.h"
#include "Exit.h"

using namespace std;

Exit::Exit()
{
}


Exit::~Exit()
{
}

Room* Exit::getOrigin(Room * destiny)
{
	Room* returnable = nullptr;

	if (destiny == a) returnable = b;
	else if (destiny == b) returnable = a;

	return returnable;
}

void Exit::setEnds(Room * entry, Room * end)
{
	if (entry) a = entry;
	if (end) b = end;
}

void Exit::describeEnd(Room * origin)
{
	if (origin == a && b != nullptr) b->describeName();
	else if (origin == b && a != nullptr) a->describeName();
}
