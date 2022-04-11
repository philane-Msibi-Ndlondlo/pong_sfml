#include <SFML/Graphics.hpp>
#include "includes/window.hpp"
#include "includes/player.hpp"
#include <string>
#include <iostream>

Window::Window(float width, float height, std::string title)
{
    	this->width = width;
    	this->height = height;
    	this->title = title;

	this->window = new sf::RenderWindow(sf::VideoMode(this->width, this->height), this->title);
    	this->window->setVerticalSyncEnabled(true);
    	this->window->setFramerateLimit(60);
    	this->player = new Player(8.0f, 40.0f);
}

Window::Window(float width, float height, std::string title, bool resizable)
{
    this->width = width;
    this->height = height;
    this->title = title;
    this->resizable = resizable;
}

void Window::show() {

    while(this->window->isOpen()){
        
        sf::Event event;

        while(this->window->pollEvent(event)){
            
            if (event.type == sf::Event::Closed)
                this->window->close();

            if (event.type == sf::Event::KeyPressed) {
            
                if (event.key.code == sf::Keyboard::Down) {
			
                    if (player->getPosY() + player->getSizeY()+ 10.0f < 300)
                        player->move(0.0f,10.0f);
                }

            if (event.key.code == sf::Keyboard::Up) {
                
                    if (player->getPosY() - 10.0f > 0)
                        player->move(0.0f,-10.0f);
                }
            }
        }

        this->window->clear();
        this->window->draw(this->player->getRect());
        this->window->display();
    }
}

void Window::clearRender(){
	std::cout << "Render here" << std::endl;
}

void Window::render() {
	std::cout << "Render here" << std::endl;
}

void Window::setWidth(int width) {
    this->width = width;
}
void Window::setheight(int height) {
    this->height = height;
}
void Window::setResizable(bool resizable) {
    this->resizable = resizable;
}

int Window::getWidth() {
    return this->width;
}

int Window::getHeight() {
    return this->height;
}
bool Window::getResizable() {

    return this->resizable;
}

Window::~Window() {
	this->window->close();
	delete this->player;
	delete this->window;

}

