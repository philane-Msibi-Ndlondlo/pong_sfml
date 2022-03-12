#include <SFML/Graphics.hpp>
#include  <iostream>

int main(int argc, char** argv) {

    sf::RenderWindow window(sf::VideoMode(600, 300), "Pong in C++");
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    sf::RectangleShape player(sf::Vector2f(8.0f, 40.0f));
    player.setFillColor(sf::Color::Green);

    while(window.isOpen()){
        
        sf::Event event;

        while(window.pollEvent(event)){
            
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed) {
            
                if (event.key.code == sf::Keyboard::Down) {
                
                    if (player.getPosition().y + player.getSize().y + 10.0f < 300)
                        player.move(0.0f,10.0f);
                }

            if (event.key.code == sf::Keyboard::Up) {
                
                    if (player.getPosition().y - 10.0f > 0)
                        player.move(0.0f,-10.0f);
                }
            }
        }

        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
