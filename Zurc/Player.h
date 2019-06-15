#ifndef __Player__
#define __Player__

#include "Entity.h"


using namespace std;

class Player : public Entity
{
public:
	Player();
	Player(char* title, char* description);
	~Player();

	void look();

	void move(string& direction);
};

#endif
