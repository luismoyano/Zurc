#ifndef __Exit__
#define __Exit__

using namespace std;

class Room;

class Exit
{
public:
	Exit();
	~Exit();

	Room* getOrigin(Room* origin);

private:
	Room* a;
	Room* b;
};
#endif

