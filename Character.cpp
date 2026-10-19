#include "Character.h"
#include "Story.h"

void Character::setCharacterName(std::string newName){
    name = newName;
}

void Character::setCharacterRace(std::string newRace){
    race = newRace;
}

std::string Character::getCharacterName(){
    return name;
}

std::string Character::getCharacterRace(){
    return race;
}

Story Character::getCharactersStory(){
    return story;
}