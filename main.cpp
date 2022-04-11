#include <SFML/Graphics.hpp>
#include  <iostream>
#include "includes/game.hpp"

int main(int argc, char** argv) {

	Game* game = new Game(600, 400, "My Pong");
	game->run();
    return 0;
}
