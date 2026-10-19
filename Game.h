#pragma once
#include <iostream>
#include "Character.h"
#include "Story.h"
#include <vector>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

class Game{
    std::vector<Character> charecters;

    public:
    std::vector<Character>& getCharacters(){
        return charecters;
    }

    void loadCharacters();
    void saveCharacters();
};

void saveGame(const std::vector<Character>& characters);
std::vector<Character> loadGame();
void outputMenu(Game& game, Character& character);
void startGame(Game& game, Character& character);
Character& chooseCharacter(Game& game);
void createCharecter(Game& game);

void to_json(json& j, const Story& story);
void from_json(const json& j, Story& story);
void to_json(json& j, const Character& character);
void from_json(const json& j, Character& character);
