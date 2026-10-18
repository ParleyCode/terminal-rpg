#pragma once
#include <iostream>
#include "Character.h"
#include <vector>

class Game{
    bool isAnyCharecterCreated = false;
    int sceneNumber = 0;
    std::vector<Character> charecters;

    public:
    std::vector<Character>& getCharacters(){
        return charecters;
    }

    bool getIsCharecterCreated(){
        return isAnyCharecterCreated;
    }

    void setSceneNumber(int number){
        sceneNumber = number;
    }

    int getSceneNumber(){
        return sceneNumber;
    }

};

void saveGame();
void loadGame();
