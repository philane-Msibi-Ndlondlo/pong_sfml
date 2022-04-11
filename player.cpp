#include <SFML/Graphics.hpp>

#include "includes/player.hpp"

Player::Player(float width, float height)
{

	this->width = width;
	this->height = height;
	this->x_pos = 0;
	this->y_pos = 0;
	this->m_player = new sf::RectangleShape(sf::Vector2f(this->width, this->height));
	this->m_player->setFillColor(sf::Color::Green);
}

Player::Player(float width, float height, sf::Color color)
{

	this->width = width;
	this->height = height;
	this->color = color;
	this->x_pos = 0;
	this->y_pos = 0;
	this->m_player = new sf::RectangleShape(sf::Vector2f(this->width, this->height));
	this->m_player->setFillColor(this->color);
}

sf::RectangleShape Player::getRect() {

	return (*this->m_player);
}

void Player::move(float x, float y) {

	this->m_player->move(x,y);
}

float Player::getPosX() {
	return this->m_player->getPosition().x;
}

float Player::getPosY() {
	return this->m_player->getPosition().y;
}

float Player::getSizeX() {
	return this->m_player->getSize().x;
}

float Player::getSizeY() {
	return this->m_player->getSize().y;
}

Player::~Player() {

	delete this->m_player;
}
