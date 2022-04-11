#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "includes/windowManager.hpp"
#include "includes/game.hpp"
#include <string>
	
Game::Game(int win_width, int win_height, std::string title) {
	
	this->w_manager = new WindowManager(win_width, win_height, title);
	this->curr_window = this->w_manager->getCurrWindow();
}

void Game::run() {
	std::cout << "Showing" << std::endl;
	this->curr_window->show();
	std::cout << "Run" <<std::endl;
}

Game::~Game(){
	delete this->w_manager;
	delete this->curr_window;

}
