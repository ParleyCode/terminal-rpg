#include "Story.h"
#include "Character.h"
#include "Game.h"
#include <cstdlib>
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
        case 3:
        goingToAdventurersGuild(character, game);
        
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
    nextScene(character, game, goingToAdventurersGuild);
}

void goingToAdventurersGuild(Character& character, Game& game){
    int choise = 0;
    clearScreen();
    std::cin.clear();std::cin.ignore(1000, '\n');
    std::cout << "After finishing breakfest and saying goodbye to your new friend, you headed to the local Adventurers Guild. It was not as big as"
    <<" Great Library or University of the Wizard Union, but still looked very good. When you came closer, you`ve heard some strange noise begind the guild";
    waitForEnter();
    clearScreen();
    std::cout <<"Outlaw1: Hey honey, would you like to go with us, and have some fun?))\n";
    waitForEnter();
    std::cout <<"Outlaw2: Yeah cutie, we won`t hurt you))\n";
    waitForEnter();
    std::cout <<"It was just two Ratfolk bandits importuning the girl, what will you do?\n\n1.Help the girl\n2.Ignore the scene\nChoose: ";
    while(!(std::cin >> choise) || choise != 1 && choise != 2){
        if(!(std::cin) || choise !=1 && choise != 2){
            std::cout << "Incorrect input!\n";
        }
    }
    if(choise == 1){
        character.getCharactersStory().HelpedGirlNearGuild = true;
        clearScreen();
        std::cout << "You couldnt just stay aside when some 2 shitheaded punk annoying the inoccent girl\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": Hey you missery beggers, what do you want from her?";
        waitForEnter();
        std::cout << "Outlaw1: Does this refers to us?\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": I dont see other missery beggers.\n";
        waitForEnter();
        std::cout << "Outlaw2: Hey listen punk, maybe you dont know yet, but we have 9 lvl, we fought against many like you, so dont try to bother us, or we will teach you a lesson how to treat strange people.\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": Okay, okay, i just want the girl to come with me.\n";
        waitForEnter();
        std::cout << "Outlaw1: Oh you dont understand, okay okay.\n";
        waitForEnter();
        clearScreen();
        std::cout << "One if the outlaw launched at you with a strike, luckily their levels were only 9, so you just wiped them off.\n";
        waitForEnter();
        std::cout << "Outlaws: Grhs! You will regret this\n";
        waitForEnter();
        std::cout << "Girl: Thank you, i dont even know what would happen with that 2 guys.\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": Oh haha dont event think about it, its already in past.\n";
        waitForEnter();
        std::cout << "Girl: How much i need to pay you?\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": Ugh dont even think about payment, lets just say i was out of blood on that two folks.\n";
        waitForEnter();
        std::cout << "Girl: Thank you dear kind stranger.\n";
        waitForEnter();
    }
    else if(choise == 2){
        clearScreen();
        std::cin.clear();std::cin.ignore(10000, '\n');
        std::cout << "Anything could happen in this big city, not everyone is protected from this robbers, so you decided to ignore the scene and jusut headed to the guild.";
        waitForEnter();
    }
    clearScreen();
    std::cout << "You came closer to the entrance of the guild, when you entered the building you saw many different races, not only elfs dwarfs humans and ratfolks, other many different creatures were there.\\n";
    waitForEnter();
    std::cout << "One draconid approached to you, and started conversation.\n";
    waitForEnter();
    std::cout << "Draconid: Oh hey there! You are novice here HA-HA-HA! Welcome to the adventurers guild HA-HA-HA!\n";
    waitForEnter();
    std::cout << "Firbolg: Haemir, dont scare the novice, leave him alone.\n";
    waitForEnter();
    std::cout << "Firbolg: Hi my name is Llorva, and its my friend Haemir, we are in one party, im the sorcerer mage.\n";
    waitForEnter();
    std::cout << "Haemir: And im a swordsman HA-HA-HA!\n";
    waitForEnter();
    std::cout << "The 2 guys seemed preety king and honest, so you tried to ask them about adventurers life.\n";
    waitForEnter();
    clearScreen();
    std::cout << character.getCharacterName() << ": Hi, um, i only came to the Regarden, and i`ve never been an adventurer could you please tell me what do i need to do?\n";
    waitForEnter();
    std::cout << "Haemir: So you are totaly new HA-HA-HA!\n";
    waitForEnter();
    std::cout << "Llorva: go to the reception, and ask for adveturers card, and the guild worker will tell you more about it. Good Luck!\n";
    waitForEnter();
    std::cout << "Haemir: Good Luck to you novice!!! HA-HA-HA!!!\n";
    waitForEnter();
    clearScreen();
    std::cout << "The laugh of draconid was heard all around the guild, you went towards the reception where nice lady met you.\n";
    waitForEnter();
    std::cout << "Guild worker: Welcome to the Adventurers Guild, what do you want to do?\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": Hi, um, id wanted to become an adventurer! But i dont know how to do this...\n";
    waitForEnter();
    std::cout << "Guild worker: I understand you, so i might tell you more about adventurers\n";
    waitForEnter();
    std::cout << "Guild worker: First of all, when you becoming an adventurer you agreeing with rules: \n1. Every adventurer must not hurt other adventurers on the mission"
    <<"\n2. Rewards from mission divides equaly between all members of the party" << "\n3. You must report about all dangers you meey on the way to the mission or on the way back home.\n";
    waitForEnter();
    std::cout << "Guild worker: Also mission separates on different levels from F- to S, level of mission says about its danger and difficulty, "
    <<"when you just starting your adventurer career you will have level F- and the cost of the adventurers card will cost you 4 shirings\n";
    waitForEnter();
    std::cout << character.getCharacterName() << "*in minds*: That`s all my money left! Damn being an adveturer not only hard and also expensive job.\n";
    waitForEnter();
    std::cout << "Guild worker: So, would you like to become an adventurer?\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": Yeah, yea, of course, here is my money.\n";
    waitForEnter();
    std::cout << "Guild worker: Okay your card will be ready until tomorrow, you will be able to go on your first mission only tomorrow, and also you need to find a party, for quest F-, members must be atleast lvl 1-2.\n";
    waitForEnter();
    std::cout << "Guild worker: Can i get your name?\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": " <<character.getCharacterName()<<" Sylvares.";
    waitForEnter();
    clearScreen();
    std::cout << "After saying goodbye to almost all your money you got your adventurers card. Thats cool of course but now you dont have any money to even eat some food.\n";
    waitForEnter();
    std::cout << "Llorva: And? Hows it?\n";
    waitForEnter();
    std::cout << character.getCharacterName() <<": Im the Adventurer now! But i dont have any money left...\n";
    waitForEnter();
    std::cout << "Haemir: HA-HA-HA! Its not problem at all, lets go with us, we will greet you at our big adventurers family, HA-HA-HA!\n";
    waitForEnter();
    std::cout << "Llorva: Hehe its true, lets go we will show you the most delicious dishes in all Regarden!\n";
    waitForEnter();
    clearScreen();
    if(character.getCharactersStory().HelpedGirlNearGuild == true){
        std::cout << "???: wait dear stranger.\n";
        waitForEnter();
        std::cout << "It was that girl from the backyard of the guild.\n";
        waitForEnter();
        std::cout << "???: i was thinking how i could pay you off for helping me, i can go on your first mission with you, im really strong, i wont interfere you, i am a healer mage 15lvl.\n";
        waitForEnter();
        std::cout << "Llarva: oh i totaly forget that you need a party for your first mission, we will come with Haemir to help you.\n";
        waitForEnter();
        std::cout << "Haemir: Ye thats right HA-HA-HA! We can go on quest level B HA-HA-HA! With our 14lvl\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": thats great! Thank you all! And one little awkward question, whats your name?\n";
        waitForEnter();
        std::cout << "???: Hehe, i totaly forget to introduce myself, im Soliana Keygella, healer and support mage lvl 15, im not strong in fights, but im very good in supporting from behind!\n";
        waitForEnter();
        std::cout << "Llarva: Oh " << character.getCharacterName() << " by the way, what role you are specificated at?\n";
        waitForEnter();
        std::cout << character.getCharacterName() << ": Heh i dont know for sure, i can use magic, sword and holy magic\n";
        waitForEnter();
        std::cout << "Soliana: You can use all 3 types?! I`ve heard that only about 0.2 percent in the all adventurers family could use all 3 types of spells\n";
        waitForEnter();
        std::cout << "Haemir: Ha-HA-HA! Our mission is gonna be interesting.\n";
    }
    else if(character.getCharactersStory().HelpedGirlNearGuild == false){
        std::cout << character.getCharacterName() << ": Guys, im sorry to bother you, but i need a party for my first quest, would you mind to come with me?\n";
        waitForEnter();
        std::cout << "Llarva: Of course, i guess with our level we can go on mission C-";
        waitForEnter();
        std::cout << character.getCharacterName() << ": Thank you so much";
        waitForEnter();
    }
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
