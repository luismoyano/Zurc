#ifndef __World__
#define __World__

#include <list>

#define AMOUNT_OF_ROOMS 8

using namespace std;

class Player;
class Entity;
class RoomFactory;

class World
{
public:
	World();
	~World();

	bool parseInput(string& input);


private:
	Player* player;
	list<Entity*> entities;

	RoomFactory* roomFactory;
};

#endif
