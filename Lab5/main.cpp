#include <iostream>
#include "Game.h"
#include "Definitions.h"

int main()
{
	hidato::Game(SCREEN_WIDTH, SCREEN_HEIGHT, "Hidato");
	return EXIT_SUCCESS;
}