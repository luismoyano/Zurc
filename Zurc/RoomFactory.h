#ifndef __RoomFactory__
#define __RoomFactory__


class ItemFactory;
class Room;

class RoomFactory
{
public:
	RoomFactory();
	~RoomFactory();

	Room* getRandomRoom();

private:
	ItemFactory* factory;

	list <Room*> rooms;
};
#endif
