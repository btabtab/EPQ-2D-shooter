#ifndef ENEMY_CLASS_H_INCLUDED
#define ENEMY_CLASS_H_INCLUDED

/*Written by Jakub*/

class Enemy
{
public:
    Enemy(){}

    Enemy(int HP, int armr, sf::Vector2f new_pos)
    {
        /*this constructor will create
        the enemy entity, I don't know
        how to make it spawn or setup
        movements and similar requirements.*/

        health = HP;
        armour = armr;
        position = new_pos;

    }

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
    int movespeed = 1; //this is in "tiles per second".

};

#endif // ENEMY_CLASS_H_INCLUDED
