#ifndef DRAW_HEADER_H_INCLUDED
#define DRAW_HEADER_H_INCLUDED

void draw( void )
{
    window.clear();

    player.render();

    window.display();
}

#endif // DRAW_HEADER_H_INCLUDED
