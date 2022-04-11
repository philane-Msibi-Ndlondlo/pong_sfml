#pragma once

#include <SFML/Graphics.hpp>

class Player {

	public:

		Player(float width, float height);

		Player(float width, float height, sf::Color color);
		
		void move(float x, float y);
		
		float getPosX();
		
		float getPosY();
		
		float getSizeX();
		
		float getSizeY();
		
		sf::RectangleShape getRect();

		~Player();

	private:

		sf::RectangleShape* m_player;
		float width;
		float height;
		float x_pos;
		float y_pos;
		sf::Color color;

};
