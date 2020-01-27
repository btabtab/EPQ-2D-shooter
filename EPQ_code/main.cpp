#include <iostream>
#include <string>
#include <vector>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "headers/main_variables.h"
#include "headers/player_class.h"
#include "headers/game_loop.h"
<<<<<<< Updated upstream
=======
#include "headers/tile_class.h"
#include "headers/level_class.h"
>>>>>>> Stashed changes

Player player(10, 10, 10, sf::Vector2f(300.f, 300.f));

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
<<<<<<< Updated upstream
        window.clear();

        player.render();
=======

        Projectile test(player.getPos(), coord(sf::Mouse::getPosition()), 300, "resources/base_projectile.bmp");
        Tile tile;

        tile.setPos(coord(100.f, 100.f));

        window.clear();

        player.render();

        test.render();
        tile.render();
>>>>>>> Stashed changes

        window.display();
    }

    return 0;
}
