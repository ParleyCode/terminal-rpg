#include "Character.h"
#include "Story.h"

void Character::setCharacterName(std::string newName){
    name = newName;
}

void Character::setCharacterRace(std::string newRace){
    race = newRace;
}

void Character::setCharacterStory(Story newStory){
    story = newStory;
}

std::string Character::getCharacterName() const{
    return name;
}

std::string Character::getCharacterRace()const{
    return race;
}

Story& Character::getCharactersStory(){
    return story;
}

const Story& Character::getCharactersStory()const{
    return story;
}