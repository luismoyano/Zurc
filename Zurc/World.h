#ifndef __World__
#define __World__

using namespace std;

class Player;


class World
{
public:
	World();
	~World();

	bool parseInput(string& input);


private:
	Player* player;
};

#endif
