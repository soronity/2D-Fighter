#include "stdafx.h"
#include "game.h"

int main()
{
    Game game;

    // Game loop
    while (game.getWindow().isOpen())
    {
        game.update();
        game.render();
    }

    return 0;
}