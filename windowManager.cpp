#include <vector>
#include "includes/windowManager.hpp"
#include "includes/window.hpp"
#include <string>

WindowManager::WindowManager(int width, int height, std::string title) {	

	this->width = width;
	this->height = height;
	this->title = title;
	this->windows = new std::vector<Window*>();
	this->windows->push_back(new Window(this->width, this->height, this->title));
	this->curr_window = this->windows->at(0);
}

Window* WindowManager::getCurrWindow() {
	return this->curr_window;
}
	
Window* WindowManager::getWindow(int index) {

	return this->windows->at(index);
}

WindowManager::~WindowManager() {

	delete[] this->windows;
	delete this->curr_window;
}
