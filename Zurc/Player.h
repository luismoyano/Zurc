#ifndef __Player__
#define __Player__

using namespace std;

class Player
{
public:
	Player();
	~Player();

	void look();

	void move(string& direction);
};

#endif
