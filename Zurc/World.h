#ifndef __World__
#define __World__

#include <list>

#define CONTENTS_IN_ROOM 4


using namespace std;

class Player;
class Entity;

class World
{
public:
	World();
	~World();

	bool parseInput(string& input);


private:
	Player* player;
	list<Entity*> entities;
};

#endif
