#pragma once
#include <iostream>
#include "Character.h"
#include "Story.h"
#include <vector>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

class Game{
    bool isAnyCharecterCreated = false;
    std::vector<Character> charecters;

    public:
    std::vector<Character>& getCharacters(){
        return charecters;
    }

    bool getIsCharecterCreated(){
        return isAnyCharecterCreated;
    }

};

void saveGame();
void loadGame();
void outputMenu(Game& game, Character& character);
void startGame(Game& game, Character& character);
Character& chooseCharacter(Game& game);
void createCharecter(Game& game);
