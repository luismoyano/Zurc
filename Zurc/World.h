#ifndef __World__
#define __World__

#include <list>

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
