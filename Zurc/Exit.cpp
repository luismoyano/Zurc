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

Room * Exit::getOrigin(Room * destiny)
{
	Room* returnable = nullptr;

	if (destiny == a) returnable = b;
	else if (destiny == b) returnable = a;

	return returnable;
}
