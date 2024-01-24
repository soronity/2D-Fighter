#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    // Load sprite
    sf::Texture texture;
    if (!texture.loadFromFile("path/to/your/texture.png")) {
        // error handling
    }

    sf::Sprite sprite;
    sprite.setTexture(texture);

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Handle input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            sprite.move(-1, 0);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			sprite.move(1, 0);
		}
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			sprite.move(0, -1);
		}


        // Render
        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}