# Welcome to the Zurc!

The Zurc is a text based game inspired in Zork where you play as the Zucc!. Your goal is to suck the private data from all the devices you can at the facebook headquarters.

## Authors

This game has been solely machinated, written and designed by Luis Carlos Moyano Medina as a task

## How to play
- [Download the game here](https://github.com/luismoyano/Zurc/releases/tag/1.0.0)
- Unzip the zip file on windows.
- Execute the exe file.
- For instrutions on how to play, just keep reading.
- Enjoy!


## Dungeon
There are 9 rooms interconnected, the items on the rooms will be randomly placed from a pool on each run. The room map looks like this:

||||
| - |:-:| -:|
| Room 1 | Room2 | Room3 |
| Room 4 | Room5 | Room6 |
| Room 7 | Room8 | Room9 |

Keep in mind you always start at room 1

## Commands
- look: Shows you the room, its contents and the neighbor rooms
- up, down, left, right: Allows you to move through the rooms
- pick: Allows you to pick one item, keep in mind Zuuc can't carry heavy items
- hand: Shows you the item at hand
- drop: Drops the item at hand on the current room
- embed: embeds one item of the room with the one at hand making it more tasty. The item on the room is destroyed in exchange
- succ: Sucks the data of the item at hand, makes you stronger and allows you to pick heavier items
- help: Shows a help menu
- exit: goes out of the game

## Approach:
I approached this game following a similar structure than the one provided at the sample code of the assignment.
Although once read it, I knew there were things I wanted to do differently, for example, for rooms and items I used the Object factory pattern to create my items and rooms and provide them randomly or generate a dungeon from a single method if required.

Another unique feature I developed was the capacity to suck data from items which had me categorizing items by the amount of data they carry and make a formula that makes the character stronger by doing so and as such, at the beginning the character can't lift a laptop and at the end it can even lift a concrete wall!

Also please notice that the git structure follows the git flow pattern (even though, to keep simplicity, git flow hasn't been installed, I just use its convention)

I had lots of fun scheming a story fitting the kind of game Zork is and made an adventure of my own flavor.
