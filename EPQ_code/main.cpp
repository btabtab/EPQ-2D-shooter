#include <iostream>
#include <string>
#include <vector>
#include <thread>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "headers/typedefs.h"

#include "headers/main_variables.h"
#include "headers/image_cleanup.h"
#include "headers/projectile_class.h"
#include "headers/player_class.h"
#include "headers/game_loop.h"
#include "headers/level_class.h"

Player player(10, 10, 10, sf::Vector2f(300.f, 300.f), "resources/player_sprite.png");

#include "headers/draw_header.h"
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

        Projectile test(player.getPos(), coord(sf::Mouse::getPosition()), 300, "resources/base_projectile.bmp");

        if(sf::Mouse::isButtonPressed(sf::Mouse::Left));

        draw();

        ptr = NULL;
    }

    return 0;
}
