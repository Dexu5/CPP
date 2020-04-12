#include<iostream>
#include "Print.h"
#include "Print.h"

class Player {
public:	
	int x, y;
	int speed;
};

void Move(Player& player, int x, int y, int speed)
{
	player.x += x * speed;
	player.y += y * speed;
}


int main()
{
	Player player; // Creating the object of Player class
	player.x = 10;
}