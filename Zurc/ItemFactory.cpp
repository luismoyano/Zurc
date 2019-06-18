#include "pch.h"
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include "ItemFactory.h"
#include "Globals.h"
#include "Item.h"

using namespace std;

ItemFactory::ItemFactory()
{
	Item* it1 =  new Item("desk", "A heavy wooden desk", 50, 100, 0);
	items.push_back(it1);

	Item* it2 =  new Item("laptop", "A laptop full packed of nice data", 5, 2, 50);
	items.push_back(it2);

	Item* it3 =  new Item("chair", "A super expensive chair for enginneers to sit on", 20, 20, 0);
	items.push_back(it3);

	Item* it4 =  new Item("couch", "A super comfy couch where three people can sleep in", 30, 40, 0);
	items.push_back(it4);

	Item* it5 =  new Item("dj_table", "A DJ table playing some tunes driven by your AI Jarvis", 15, 60, 15);
	items.push_back(it5);

	Item* it6 =  new Item("coconut_plant", "What? You thought we couldn't afford having this? HA!", 70, 100, 0);
	items.push_back(it6);

	Item* it7 =  new Item("computer", "A big computer packed of awesome data", 10, 5, 100);
	items.push_back(it7);

	Item* it8 =  new Item("mobile_phone", "Pocket size data", 1, 1, 25);
	items.push_back(it8);

	Item* it9 =  new Item("bananas", "Yummy food for humans", 1, 1, 0);
	items.push_back(it9);

	Item* it10 = new Item("balloons", "Ballons improve employees happiness", 1, 1, 0);
	items.push_back(it10);

	Item* it11 = new Item("chocolate_bar", "People give you data in exchange for this!", 1, 1, 0);
	items.push_back(it11);

	Item* it12 = new Item("server", "The holy grail of data!!", 100, 80, 300);
	items.push_back(it12);

	Item* it13 = new Item("game_console", "Good for people to evade form the boredom of their jobs!", 2, 3, 120);
	items.push_back(it13);

	Item* it14 = new Item("facebook_Wall", "A wall for people to write more data!", 120, 500, 0);
	items.push_back(it14);

	Item* it15 = new Item("fridge", "A very cold place", 60, 50, 10);
	items.push_back(it15);

	Item* it16 = new Item("book", "Meh this doesn't have data", 1, 1, 0);
	items.push_back(it16);

	Item* it17 = new Item("camera", "With this I'll be immortal!!", 2, 5, 5);
	items.push_back(it17);

	Item* it18 = new Item("slide", "Fun to evade from boredom up to new heights", 120, 500, 1);
	items.push_back(it18);

	Item* it19 = new Item("basket_ball", "No data here", 2, 2, 0);
	items.push_back(it19);

	Item* it20 = new Item("time_travel_portal", "Meh no data who cares", 120, 500, 1000);
	items.push_back(it20);

}


ItemFactory::~ItemFactory()
{
	for (list<Item*>::iterator it = items.begin(); it != items.end(); ++it)
	{
		delete *it;
	}

	items.clear();
}

Item* ItemFactory::getRandomItem()
{
	return *Globals::getRandom(items.begin(), 20);
}
