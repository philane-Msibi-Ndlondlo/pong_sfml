#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include "player.hpp"

class Window {
    
    private:
        int width;
        int height;
        std::string title;
        bool resizable;
	sf::RenderWindow* window;
	Player* player;

    public:
        Window(float width, float height, std::string title);
        Window(float width, float height, std::string title, bool resizable);

        void clearRender();
        void render();
	void draw(void* shape);

        void setWidth(int width);
        void setheight(int height);
        void setResizable(bool resizable);

        int getWidth();
        int getHeight();
        bool getResizable();
	void show();

	~Window();
};
