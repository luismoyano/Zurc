#ifndef __RoomFactory__
#define __RoomFactory__

#include <vector>

#define ITEMS_IN_ROOM 4
#define MAX_AMOUNT_OF_EXITS_IN_A_ROOM 4

using namespace std;

class ItemFactory;
class Room;

class RoomFactory
{
public:
	RoomFactory();
	~RoomFactory();

	Room* generateDungeon();

private:
	ItemFactory* factory;
	vector<Room*> rooms;
};
#endif
