#ifndef __World__
#define __World__

#include <list>

#define AMOUNT_OF_ROOMS 8

using namespace std;

class Player;
class Entity;
class RoomFactory;

enum GameMode
{
	NORMAL,
	PICKING,
	EMBEDDING
};

class World
{
public:
	World();
	~World();

	bool parseInput(string& input);
	

private:
	Player* player;
	RoomFactory* roomFactory;
	GameMode mode;

	bool parseNormal(string& input);
	bool parsePicking(string& input);
	bool parseEmbedding(string& input);
};

#endif
