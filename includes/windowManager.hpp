#pragma once

#include <vector>
#include "window.hpp"
#include <string>

class WindowManager {

	private:
		std::vector<Window*>* windows;
		Window* curr_window;
		int width;
		int height;
		std::string title;

	public:
		WindowManager(int width, int height, std::string title);
		Window* getCurrWindow();
		Window* getWindow(int index);

		~WindowManager();
};
