#include "pch.h"
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include "ItemFactory.h"
#include "Item.h"

using namespace std;

ItemFactory::ItemFactory()
{
	Item* it1 =  new Item("Desk", "A heavy wooden desk", 50, 100);
	items.push_back(it1);

	Item* it2 =  new Item("Laptop", "A laptop full packed of nice data", 5, 2);
	items.push_back(it2);

	Item* it3 =  new Item("Chair", "A super expensive chair for enginneers to sit on", 20, 20);
	items.push_back(it3);

	Item* it4 =  new Item("Couch", "A super comfy couch where three people can sleep in", 30, 40);
	items.push_back(it4);

	Item* it5 =  new Item("DJ table", "A DJ table playing some tunes driven by your AI Jarvis", 15, 60);
	items.push_back(it5);

	Item* it6 =  new Item("Coconut plant", "What? You thought we couldn't afford having this? HA!", 70, 100);
	items.push_back(it6);

	Item* it7 =  new Item("Computer", "A big computer packed of awesome data", 10, 5);
	items.push_back(it7);

	Item* it8 =  new Item("Mobile phone", "Pocket size data", 1, 1);
	items.push_back(it8);

	Item* it9 =  new Item("Bananas", "Yummy food for humans", 1, 1);
	items.push_back(it9);

	Item* it10 = new Item("Balloons", "Ballons improve employees happiness", 1, 1);
	items.push_back(it10);

	Item* it11 = new Item("Chocolate bar", "People give you data in exchange for this!", 1, 1);
	items.push_back(it11);

	Item* it12 = new Item("Server", "The holy grail of data!!", 100, 80);
	items.push_back(it12);

	Item* it13 = new Item("Game Console", "Good for people to evade form the boredom of their jobs!", 2, 3);
	items.push_back(it13);

	Item* it14 = new Item("Facebook Wall", "A wall for people to write more data!", 120, 500);
	items.push_back(it14);

	Item* it15 = new Item("Drinks fridge", "A very cold place", 60, 50);
	items.push_back(it15);

	Item* it16 = new Item("Book", "Meh this doesn't have data", 1, 1);
	items.push_back(it16);

	Item* it17 = new Item("Camera", "With this I'll be immortal!!", 2, 5);
	items.push_back(it17);

	Item* it18 = new Item("Slide", "Fun to evade from boredom up to new heights", 120, 500);
	items.push_back(it18);

	Item* it19 = new Item("Basket ball", "No data here", 2, 2);
	items.push_back(it19);

	Item* it20 = new Item("Time travel portal", "Meh no data who cares", 120, 500);
	items.push_back(it20);

}


ItemFactory::~ItemFactory()
{
}

Item* ItemFactory::getRandomItem()
{
	int randomNumber = rand() % 20;
	auto it = items.begin();
	advance(it, randomNumber);
	
	return *it;
}
