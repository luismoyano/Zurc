#ifndef __RoomFactory__
#define __RoomFactory__

#define ITEMS_IN_ROOM 4
#define MAX_AMOUNT_OF_EXITS_IN_A_ROOM 4


class ItemFactory;
class Room;

class RoomFactory
{
public:
	RoomFactory();
	~RoomFactory();

	Room* generateDungeon(int amountOfRooms);

private:

	Room* getRandomRoom();

	ItemFactory* factory;
	list <Room*> rooms;
};
#endif
