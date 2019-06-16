#ifndef __Player__
#define __Player__

#include "Entity.h"

using namespace std;

class Room;

class Player : public Entity
{
public:
	Player();
	Player(char* title, char* description, Room* room);
	~Player();

	void setRoom(Room* room);

	void look();
	void move(string& direction);

private:
	Room* currentRoom;
};

#endif
