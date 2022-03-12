#include <SFML/Graphics.hpp>
#include "includes/window.hpp"
#include <string>
#include <iostream>

Window::Window(float width, float height, std::string title)
{
    this->width = width;
    this->height = height;
    this->title = title;
}

Window::Window(float width, float height, std::string title, bool resizable)
{
    this->width = width;
    this->height = height;
    this->title = title;
    this->resizable = resizable;
}

void Window::clearRender(){
    this->clear();
}

void Window::render() {
    this->display();
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

