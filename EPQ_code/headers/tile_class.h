#ifndef TILE_CLASS_H_INCLUDED
#define TILE_CLASS_H_INCLUDED

/*
initially written by John Edgar
*/

class Tile
{
public:

    Tile(){}

    Tile(str filename, index ID)
    {
        if(!image.loadFromFile(filename)){      }

        image = image_cleanup(image);

        if(!texture.loadFromImage(image));

        sprite.setTexture(texture);
    }

    void render( void ){window.draw(sprite);}

    void setPos(coord N_coord){position = N_coord;}

private:

str name;
index ID;

sf::Image image;
sf::Texture texture;
sf::Sprite sprite;

coord position;
};

#endif // TILE_CLASS_H_INCLUDED
