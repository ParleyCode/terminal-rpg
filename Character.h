#pragma once
#include <iostream>
#include "Story.h"

class Character{
    Story story;

    std::string name;
    std::string race;

public:
    //Setters
    void setCharacterName(std::string newName);
    void setCharacterRace(std::string newRace);

    //Getters
    std::string getCharacterName();
    std::string getCharacterRace();
};

