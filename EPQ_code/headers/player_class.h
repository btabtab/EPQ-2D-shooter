#ifndef PLAYER_CLASS_H_INCLUDED
#define PLAYER_CLASS_H_INCLUDED

class Player
{
public:
    Player(){}

    Player(int HP, int Armo, int  ammo, sf::Vector2f new_pos, str filename)
    {
        /*this constructor will create
        the player entity that will be
        controlled by the player.*/

        health = HP;
        armour = armour;
        ammunition = ammo;
        position = new_pos;

        aim_path.resize(3);
        aim_path.setPrimitiveType(sf::Lines);

    }

    void movement()
    {

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            position.y -= movespeed;

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            position.y += movespeed;

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            position.x -= movespeed;

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            position.x += movespeed;

        aim_path[0].position = sf::Vector2f(sf::Vector2f(sf::Mouse::getPosition(window)));
        aim_path[1].position = sf::Vector2f(position);

        std::cout << "x: " << position.x << "/600 y: " << position.y << "/600";
        std::cout << std::endl;
    }

    void render(){window.draw(aim_path);}

private:
    sf::Vector2f position;

    int max_health;
    int health;
    int armour;
    int accuracey;

    int range;
    int bullet_travel;
    index bullet_count;

    std::vector <std::string> weapons;
    int ammunition;
    int movespeed = 1; //this is in "tiles per second".

    sf::Image image;
    sf::Texture texture;
    sf::Sprite body;

    sf::VertexArray bullet;


    sf::VertexArray aim_path;

};

#endif // PLAYER_CLASS_H_INCLUDED
