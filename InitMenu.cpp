#include "Character.h"

#include "Game.h"
#include "Story.h"
#include <iostream>
#include <string>
#include "InitMenu.h"

void outputMenu(){
    Game game;
    Character character;
    int choise = 0;

    std::cout << "------TERMINAL RPG------\n"
    <<"1. Start new game \n"
    <<"2. Continue \n"
    <<"3. Create new charecter \n"
    <<"4. Quit the game\n";

    std::cout << "\nPlease enter what you want to do: ";
    while(!(std::cin >> choise) || choise < 1 || choise > 4){
        if(!(std::cin) || choise > 1 || choise < 4){
            std::cin.clear();std::cin.ignore(10000, '\n');
            std::cout << "\nIncorrect input! "
            << "\nPlease enter what you want to do: " << std::flush;

        }
    }

    switch(choise){
    case 1:
        //startGame(game, character);
        firstTimeInTown(character);
        break;
    case 2:  
        break;
    case 3:
        createCharecter(game, character);
        break;

    }
}

void startGame(Game game, Character character){
    int choise = 0;
    std::string createCharecterChoise;
    bool createCharecterSucces = false;
    if(game.getCharacters().empty()){
        std::cout << "There is no characters that were created yet :(\n" ;
        while(createCharecterSucces == false){
        std::cout << "Create a new one? (y/n): ";
        std::cin.clear();std::cin.ignore(10000,'\n');
        std::getline(std::cin, createCharecterChoise);
        if(createCharecterChoise == "y"){
            createCharecterSucces = true;
            createCharecter(game, character);
            break;
        }
        if(createCharecterChoise == "n"){
            createCharecterSucces = true;
            break;
        }
        else{
            std::cout << "\nIncorrect input!\n";
        }
    }
}
    chooseScene(character);

}

void createCharecter(Game game, Character character){
    std::string name;
    std::string race;
    bool raceSucces = false;

    std::cout << "Please enter name for your character: ";
    std::cin.clear();std::cin.ignore(10000,'\n');
    std::getline(std::cin, name);

    std::cout << "Please enter race of your character(human/elf/dwarf): ";
    while(!raceSucces){

    std::getline(std::cin, race);
    if(race != "human" && race != "elf" && race != "dwarf"){
        std::cout << "Wrong input!\nPlease enter race (human/elf/dwarf): ";
    }
    else{
        raceSucces = true;
    }
    }

    character.setCharacterName(name);
    character.setCharacterRace(race);

    game.getCharacters().push_back(character);
}