#include "Character.h"

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
