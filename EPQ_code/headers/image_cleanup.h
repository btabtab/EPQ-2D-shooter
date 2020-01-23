#ifndef IMAGE_CLEANUP_H_INCLUDED
#define IMAGE_CLEANUP_H_INCLUDED

/*
This code was written by John Edgar (proudly so)
*/

sf::Image image_cleanup(sf::Image image_to_clean)
{
    for(float x = 0; x != image_to_clean.getSize().x; x++)
    {
        for(float y = 0; y != image_to_clean.getSize().y; y++)
        {
            if(image_to_clean.getPixel(x, y) == background)
                image_to_clean.setPixel(x, y, invisible);
        }
    }
}

#endif // IMAGE_CLEANUP_H_INCLUDED
