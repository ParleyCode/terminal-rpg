#include "Story.h"
#include "Character.h"
#include "Game.h"
#include <iostream>
#include <ostream>
#include <string>
#include <functional>



void chooseScene(Character& character, Game& game){
    switch(character.getCharactersStory().getCurrentScene()){
        case 1:
        firstTimeInTown(character, game);
        case 2:
        inTheHotelPart1(character, game);
        
        break;
    }

}
void firstTimeInTown(Character& character, Game& game){
    int storyNumber = 2;
    std::cin.clear();std::cin.ignore(10000,'\n');
    clearScreen();
    std::cout << "===============GAME INFO===============\n\nTo continue dialogs you can press ENTER.(Try it)";
    std::cin.get();
    clearScreen();
    std::cout << "To begin your journey "<<character.getCharacterName()<< " you, were born as an "<< character.getCharacterRace()
    << " you began your journey in the little town named Regarden. There are 4 races in the town, wise and long-living elfs,"
    <<" strong and fun dwarf, social and cheerful humans, and also the fours race of Ratfolks." << " The last mencioned race is the race of greedy cunning and self-interested creatures, welp not all of them are like that"
    <<". Of course there are many good Ratfolks, but most of them more likely to use you instead of helping you.";
    waitForEnter();
    clearScreen();

    std::cout <<" When you only came to the town you saw some greatful building, local cathedral and the main plaza of the town."
    <<" You saw many cozy pubs crowded with dwarfs and humans, on the oposite site of the plaza you saw elfs and humans sitting in the libraries drinking Apple Cider with cinamon."
    <<" And in the middle of the plaza elfs and dwarfs were working on the most fascinating memorial you ever saw, it was a big cube symbolyzed knowledge and peace between races.";
    waitForEnter();
    clearScreen();
    
    std::cout <<"After a while, you came with an idea to stay in the local hotel. You still have some money that you erned in your home town, "
    << "but in a while your savings will turn into ash, so you came with a plan to become adventurerer."
    <<"You came to cozy place named HogHut where you met a wonderful Half-Elf Marta.";
    waitForEnter();
    clearScreen();

    std::cout << "Marta: Welcome to the coziest hotel in all Regarden!";
    waitForEnter();
    std::cout << character.getCharacterName()<<": Oh hi, id like to get a room for one night.";
    waitForEnter();
    std::cout << "Marta: I see you are not from here! Greetings to the greatest town Regarden!\nHave you already tasted our delicious food and visited the Great Library?";
    waitForEnter();
    std::cout << character.getCharacterName()<<": Uuh no, not yet, its my first day here so i just came across the central plaza and came here to rest.";
    waitForEnter();
    std::cout <<"Marta: Oh you must be exhausted after your journey, sorry for my meaningless talks, the room for 1 night will cost 2 shirings.";
    waitForEnter();
    std::cout << character.getCharacterName()<<": Okay, here`s money";
    waitForEnter();
    std::cout << "Marta: Thank you, this is your key, your room number is 217. In your payment included tomorrows breakfast, so dont miss it ^_-";
    waitForEnter();
    std::cout << character.getCharacterName()<<": `kay thank you for your service.";

    clearScreen();
    std::cout << "After talking to this bright and cheerful girl, your mood after long exhausting journey begin to improve."
    <<" You came to your room, and after unpacking the bags felt on the soft and warm bed.\n\n";
    waitForEnter();
    std::cout << character.getCharacterName()<<": Yea i definetly need to go to the adventureres guild tomorrow, this night cost me almost half of my savings"
    <<" and also need to find my aut, as i remember she was a great mage that works in the Great Library.\n\n";
    waitForEnter();
    std::cout << "After thinking about your tomorrow`s plan your eyes began to close, and soon you felt asleap.";
    waitForEnter();
    nextScene(character, game, inTheHotelPart1);
}

void inTheHotelPart1(Character& character, Game& game){
    clearScreen();
    std::cin.clear();std::cin.ignore(10000, '\n');
    std::cout << "\n\n\n\n\t\t\t\t|-----------|\n"
              << "\t\t\t\t|   DAY 2   |\n"
              << "\t\t\t\t|-----------|";
    waitForEnter();
    clearScreen();
    std::cout << "You woke up as soon as first sun beams reached your window. The comming day is seems to be the Big day, "
    <<"many things need to do.";
    waitForEnter();
    clearScreen();
    
    std::cout << "You fastly took shower, brushed teeth, packed your stuff on fast hand, and headed to dinner room for promissed breakfast.";
    waitForEnter();
    clearScreen();

    std::cout << "After locking up the room, you checked if you could forget something, while cheking bags you totaly fell out of the world"
    << ", and turning another corridor corner, you bumped into someone...";
    waitForEnter();
    clearScreen();

    std::cout << "???: Ouch!\n";
    waitForEnter();
    std::cout << "You saw a women that were carrying books, and because of you dropped it all on the floor.\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": Sorry, im terrible sorry, let me help you.\n";
    waitForEnter();
    std::cout << "You fastly helped woman, while asking her for forgivness.\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": I was totaly unfocused, and im really sorry that i bumped into you,\n would you mind to set me a company on breakfast so i can buy you something to make amends?\n";
    waitForEnter();
    std::cout << "???: Um i guess you can help me to carry my books, and we can go on breakfast.\n";
    waitForEnter();
    clearScreen();

    std::cout << "While you were walking to her room you have got a little talk, it turned out that this girls name is Amanda\n"
    <<"and she is a student in a local University of The Wizard Union, the biggest university in the whole country studiying there\n"
    <<"is really a big achievment, Amanda was a little shy to talk with anyone, so you needed to start conversation by yourself.\n";
    waitForEnter();
    clearScreen();

    std::cout << character.getCharacterName() << ": So you are the student of the Wizard Union university, and you are working in the Great Library, visiting 2 greatest place of town haha\n";
    waitForEnter();
    std::cout << "Amanda: he-he, yea maybe, but im not totaly working in the library, im just helping mrs Chlorinde, she is a very talented magi.\n";
    waitForEnter();
    std::cout << character.getCharacterName()<<": wait, mrs Chlorinde you talking about is, Chlorinde Sylvares?\n";
    waitForEnter();
    std::cout << "Amanda: y-yeah? She is my mentor, she helps me in my science works and also she is a good person....\n";
    waitForEnter();
    std::cout << character.getCharacterName()<<": yea-yea, i definetly know it\n";
    waitForEnter();
    std::cout << "Amanda: have you ever met before?\n";
    waitForEnter();
    std::cout << character.getCharacterName()<<": heh, not like we 'met' before, to be honest she is my aunt, and she is one of the reasons i came to Regarden"
    <<", always better to start a new life when someone acquainted is around.\n";
    waitForEnter();
    std::cout << "Amanda: OMG thats, that means that you are "<<character.getCharacterName()<<" Sylvares!?\n";
    waitForEnter();
    std::cout<<character.getCharacterName()<<": Nice to meet you ^_-\n";
    waitForEnter();
    std::cout << "Amanda: mrs Chlorinde was telling so much about you, is that true that you can use spells of the archon level?\n"
    <<"Also she told that you are a really really good in brewing poitions and...\n";
    waitForEnter();
    std::cout << "Amanda: oh sorry, sorry we definetly need to go meet your aunt, now i need to run to the university but i`ll be free\n"
    <<"after 16.00, so please come to the entrance of the Great Library at around 16.00\n";
    waitForEnter();
    clearScreen();
    std::cout << "After hearing that Chlorinde Sylvares is your aunt and i am her beloved nephew, the modesty of the girl suddenly dissapeared\n"
    <<"It was even a little bit strange to see how that shy girl that a moment ago couldt even link two words, started to bombard you with questions.\n";
    waitForEnter();
    clearScreen();

}

int Story::getCurrentScene() const {
    return currentScene;
}

void Story::setCurrentScene(int newScene){
    currentScene = newScene;
}

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

void waitForEnter(){
    std::cin.get();
}

void nextScene(Character& character, Game& game, std::function<void(Character&, Game&)> scene){
    int choise = 0;
    bool choiseSucces = false;
    clearScreen();
    std::cout << "Please chose what you want to do:\n1. Continue story\n2. Save and quit to the menu\n";
    while(!choiseSucces){
        std::cin >> choise;
        if(choise == 1){
            character.getCharactersStory().setCurrentScene(character.getCharactersStory().getCurrentScene() + 1);
            saveGame(game.getCharacters());
            scene(character, game);
            choiseSucces = true;
        }
        else if(choise == 2){
            choiseSucces = true;
            //Skip
        }
        else{
            std::cout << "Wrong input!";
            std::cin.clear();std::cin.ignore(10000,'\n');
        }
    }
    
}
