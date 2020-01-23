#include <iostream>
#include <string>
#include <vector>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "headers/typedefs.h"

#include "headers/main_variables.h"
#include "headers/image_cleanup.h"
#include "headers/player_class.h"
#include "headers/game_loop.h"
#include "headers/level_class.h"

Player player(10, 10, 10, sf::Vector2f(300.f, 300.f), "resources/player_sprite.png");

int main()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        player.movement();
        window.clear();

        player.render();

        window.display();
    }

    return 0;
}
