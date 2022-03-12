#include <SFML/Graphics.hpp>
#include <string>

class Window: public sf::RenderWindow {
    
    private:
        int width;
        int height;
        std::string title;
        bool resizable;


    public:
        Window(float width, float height, std::string title);
        Window(float width, float height, std::string title, bool resizable);

        void clearRender();
        void render();

        void setWidth(int width);
        void setheight(int height);
        void setResizable(bool resizable);

        int getWidth();
        int getHeight();
        bool getResizable();
};
