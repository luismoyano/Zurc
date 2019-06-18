#ifndef __Player__
#define __Player__

#include "Entity.h"

using namespace std;

class Room;
class Item;

class Player : public Entity
{
public:
	Player();
	Player(char* title, char* description, Room* room);
	~Player();

	void setRoom(Room* room);

	void look();
	void move(string& direction);
	bool pickItemByName(string &input);
	void hand();
	Item* drop();

private:
	Room* currentRoom;
	Item* pickedItem;

	int strength;
	int capacity;
};

#endif
