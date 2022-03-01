#include <SFML/Graphics.hpp>

int screen_x = 400;
int screen_y = 400;

int main()
{
    sf::RenderWindow window(sf::VideoMode(screen_x,screen_y), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setOrigin(shape.getRadius(),shape.getRadius());
    shape.setPosition(screen_x/2,screen_y/2);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}