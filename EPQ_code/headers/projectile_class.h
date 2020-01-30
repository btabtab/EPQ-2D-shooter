#ifndef PROJECTILE_CLASS_H_INCLUDED
#define PROJECTILE_CLASS_H_INCLUDED

class Projectile
{
public:

    Projectile(){}

    Projectile(coord pos_1, coord pos_2, int life_length, str filename)
    {
        Rstart_P = pos_1;
        Rend_P = pos_2;
        life_left = life_length;

        image.loadFromFile(filename);
        image = image_cleanup(image);
        texture.loadFromImage(image);
        body.setTexture(texture);

        body.setOrigin(image.getSize().x/2, image.getSize().y/2);

    }

    void render( void ) {window.draw(body);}

    void launch(coord n_Rstart_P, coord n_Rend_P)
    {
        trajectory = n_Rend_P - n_Rstart_P;

    }

    void update()
    {
        while(life_left > 0)
        {
            position += trajectory;
            body.setPosition(position);
        }
    }

    coord getPosition()
    {
        return position;
    }

private:
    sf::Thread advance()

    coord position;
    coord Rstart_P, Rend_P;
    coord c_pos;

    sf::Vector2f trajectory;

    int life_left;
    int t_last;

    sf::Image image;
    sf::Texture texture;
    sf::Sprite body;
};

#endif // PROJECTILE_CLASS_H_INCLUDED
