#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "windowManager.hpp"
#include "window.hpp"
#include <string>

class Game {

	private:	
		WindowManager* w_manager;
		Window* curr_window;

	public:
		Game(int win_width, int win_height, std::string title);
		void run();
		~Game();
};
