#include "Game.h"

int main(){
    Game game;
    Character character;
    game.loadCharacters();
    outputMenu(game, character);
    return 0;
}