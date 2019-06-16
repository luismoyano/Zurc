#ifndef __Room__
#define __Room__

#include "Entity.h"
#include <list>

using namespace std;

class Entity;
class Exit;

class Room : public Entity
{
public:
	Room();
	Room(const char* title, const char* desc);
	~Room();

	void describe();
	void addContent(Entity* content);

private:
	list<Entity*> contents;

	Exit * upExit;
	Exit * downExit;
	Exit * leftExit;
	Exit * rightExit;
};
#endif
