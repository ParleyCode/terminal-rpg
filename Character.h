#pragma once
#include "Story.h"
#include <iostream>

class Character{
    Story story;

    std::string name;
    std::string race;
    
public:
    //Setters
    void setCharacterName(std::string newName);
    void setCharacterRace(std::string newRace);
    void setCharacterStory(Story newStory);

    //Getters
    std::string getCharacterName() const;
    std::string getCharacterRace() const;
    const Story& getCharactersStory()const;
    Story& getCharactersStory();
};

