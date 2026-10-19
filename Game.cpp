#include "Game.h"
#include "Character.h"
#include "Story.h"

/*

    Function to load class Game from json and also vector of the class Characters with their own class Story

*/
void loadGame(){

}

/*

    Function to save class Game, vector of class Character to json format file

*/
void saveGame(){

}

/*

    Function to check if any character was created, if no ask to create a new one, if yes show list to choose the slot

*/
void startGame(Game& game, Character& character){
    Character chosenCharacter;

    int choise = 0;
    std::string createCharecterChoise;
    bool createCharecterSucces = false;
    clearScreen();
    std::cin.clear();std::cin.ignore(10000, '\n');
    if(game.getCharacters().empty()){
        std::cout << "There is no characters that were created yet :(\n" ;
        while(createCharecterSucces == false){
        std::cout << "Create a new one? (y/n): ";
        std::getline(std::cin, createCharecterChoise);
        if(createCharecterChoise == "y"){
            createCharecterSucces = true;
            createCharecter(game);
            break;
        }
        if(createCharecterChoise == "n"){
            createCharecterSucces = true;
            break;
        }
        else{
            std::cout << "\nIncorrect input!\n";
            std::cin.clear();std::cin.ignore(10000,'\n');
        }
    }
}
    else{
        chosenCharacter = chooseCharacter(game);
        chooseScene(chosenCharacter, game);
    }
}

/*

    Function to create new character to the vector list of characters/save_slots

*/
void createCharecter(Game& game){
    Character character;
    std::string name;
    std::string race;
    bool raceSucces = false;

    std::cout << "Please enter name for your character: ";
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

Character& chooseCharacter(Game& game){
    int choise = 0;
    int counter = 0;

    std::cout << "Please choose your character";
    for(auto& chr : game.getCharacters()){
        ++counter;
        std::cout << counter <<". \t"<<chr.getCharacterName()<<"\t"<<chr.getCharacterRace();
    }
    std::cout << "Please selectd character: \n";
    while(!(std::cin >> choise) || choise < 0 || choise > game.getCharacters().size()){
        if(!(std::cin) || choise < 0 || choise > game.getCharacters().size()){
            std::cout << "Wrong input!";
            std::cin.clear();std::cin.ignore(10000, '\n');
            continue;
        }    
    }
    return game.getCharacters()[choise - 1];
}

void outputMenu(Game& game, Character& character){
    int choise = 0;
    while(true){
    std::cout << "------TERMINAL RPG------\n"
    <<"1. Start new game \n"
    <<"2. Continue \n"
    <<"3. Create new charecter \n"
    <<"4. Quit the game\n";

    std::cout << "\nPlease enter what you want to do: ";
    while(!(std::cin >> choise) || choise < 1 && choise > 4){
        if(!(std::cin) || choise > 1 || choise < 4){
            std::cin.clear();std::cin.ignore(10000, '\n');
            std::cout << "\nIncorrect input! "
            << "\nPlease enter what you want to do: " << std::flush;

        }
    }

    switch(choise){
    case 1:
        startGame(game, character);
        break;
    case 2:  
        break;
    case 3:
        createCharecter(game);
        break;

    }
    }
}