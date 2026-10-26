#include "Story.h"
#include "Character.h"
#include "Game.h"
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include <functional>
#include <type_traits>
#include <valarray>



void chooseScene(Character& character, Game& game){
    switch(character.getCharactersStory().getCurrentScene()){
        case 1:
            firstTimeInTown(character, game);
            break;
        case 2:
            inTheHotelPart1(character, game);
            break;
        case 3:
            goingToAdventurersGuild(character, game);
            break;
        case 4:
            meetinAuntWithAmanda(character, game);
            break;
        case 5:
            gettingReadyForMission(character, game);
            break;
        case 6:
            if(character.getCharactersStory().HelpedGirlNearGuild == true){
                missionWithSoliana(character, game);
            }
            else if(character.getCharactersStory().HelpedGirlNearGuild == false){
                missionWithoutSoliana(character, game);
            }
    }

}
void firstTimeInTown(Character& character, Game& game){
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
        saveGame(game.getCharacters());
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
    std::cout << "You came closer to the entrance of the guild, when you entered the building you saw many different races, not only elfs dwarfs humans and ratfolks, other many different creatures were there.\n";
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
        std::cout << "Haemir: Ye thats right HA-HA-HA! We can go on quest level B+ HA-HA-HA! With our 14lvl\n";
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
    nextScene(character, game, meetinAuntWithAmanda);
}

void meetinAuntWithAmanda(Character &character, Game &game){
    clearScreen();
    std::cout << "After meeting your new friends, you headed to the main entrance of the Great Library, to meet Amanda.\n";
    waitForEnter();
    std::cout << "While you walking to the appointment, you suddenly realized that town was really quite and calm, the pace\n"
    <<"of people around was slow, in this atmosphere you feel really warm inside, and after a moment you saw acquainted silhouette.";
    waitForEnter();
    clearScreen();
    std::cout << "Amanda: Hey! "<<character.getCharacterName()<< "! Im here!\n";
    waitForEnter();
    std::cout << "You saw, girl filled with energy running and waving towards you.\n";
    waitForEnter();
    std::cout << "Amanda: Fewh, it was pretty hard day in university.\n";
    waitForEnter();
    std::cout << character.getCharacterName()<<": what`s so about it?\n";
    waitForEnter();
    std::cout << "Amanda: I`ve needed to brew potion of endurance on the first lesson, on the second we were casting fire spells almost for an hour\n "
    <<"and on the third lesson we were passing the test about monster knowlege.\n";
    waitForEnter();
    std::cout << character.getCharacterName() <<": well, heh maybe you dont like the subjects, but one time they can save your life.\n";
    waitForEnter();
    std::cout << "Amanda: Ugh, you say as our teachers, lets better head to mrs Chlorinde, come with me\n";
    waitForEnter();
    clearScreen();
    std::cout << "You entered the rial GIANT library, as some legends says that here you can find answer on any question that you will\n"
    <<" ever have in your mind.\n";
    waitForEnter();
    std::cout << "With Amanda you were walking past giant shelfs densely-packed with books of different categories.\n";
    waitForEnter();
    std::cout << "Amanda: mrs Chlorinde its me!!!\n";
    waitForEnter();
    std::cout << "Lady dressed in a glorious cosmic robe, turned around.\n";
    waitForEnter();
    std::cout << "It was an elf lady, who had earrings in form of globes, and necklace that looked like magic levitating cube inside of round frame\n";
    waitForEnter();
    std::cout << "Chlorinde: Hi Amanda, how your learning day today? And who is this graceful man with you?\n";
    waitForEnter();
    std::cout << "Chlorinde: Wait a minute... Cuite? Is that really you!?\n";
    waitForEnter();
    std::cout << character.getCharacterName()<<": Haha, long time no see auntie.\n";
    waitForEnter();
    std::cout << "Chlorinde: Oh my.. After trainings you really became strong mage, i see mana is boiling inside of you.\n";
    waitForEnter();
    std::cout << "Chlorinde: You are became much stronger after our last meet.\n";
    waitForEnter();
    std::cout << "Past five years you were training with yours aunts good friends Vorthan, the undefeated king of sword, training with him\n"
    <<"was trully hell on earth.\n";
    waitForEnter();
    std::cout << "Lysara, Queen of Magic, the greatest mage of all times, she created many spells that became forbidden, because using them\n"
    <<"can lead to enormous destructions.\n";
    waitForEnter();
    std::cout << "Auriella, Goddes Flower, the greates healer of the whole world, as legends says she can even revive undeads, also she specificating\n"
    <<"in support magic, so that her teammates could not even get injuried.\n";
    waitForEnter();
    std::cout << "With your aunt they formed strongest team Erebrus, still there is still no threat that could`ve stopped this team, and to make\n "
    <<"you stronger, your aunt asked them to train you, so you could become strong enough to keep the world safe, of threats that could not be stopped\n"
    <<"by Erebrus.\n";
    waitForEnter();
    std::cout << "Amanda: wait wait wait, EREBRUS!? YOU WERE TRAINED BY EREBRUS!?\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": Hehe, i guess so....\n";
    waitForEnter();
    std::cout << "Chlorinde: Let`s come to my office, we can have a little cup of coffe and have a little chat.\n";
    waitForEnter();
    clearScreen();
    std::cout << "You followed Chlorinde to her room, something strange were in that room, windows in the room did not showed street views\n"
    <<"it showed space with planets?...\n";
    waitForEnter();
    std::cout << "Chlorinde: You can have a sit, i`ll make us something to drink.\n";
    waitForEnter();
    std::cout << "You speaked for about an hour about your trainings, Chlorinde and Amanda told you hows life in the town looks like and who are adventurers\n";
    waitForEnter();
    std::cout << "Chlorinde: so you finally became and adventurer? Congrats! As i remember it was your biggest wish\n";
    waitForEnter();
    std::cout << character.getCharacterName() <<": Yeah! I even found a party for my mission!\n";
    waitForEnter();
    if(character.getCharactersStory().HelpedGirlNearGuild == true){
        std::cout << character.getCharacterName() << ": Draconid swordsman Haemir, Firbolg mage Llarva, and healer Soliana.\n";
    }
    else if (character.getCharactersStory().HelpedGirlNearGuild == false) {
        std::cout << character.getCharacterName() << ": Draconid swordsman Haemir, and Firbolg mage Llarva.\n";
    }
    waitForEnter();
    std::cout << "Chlorinde: thats good, i wish you luck on your first mission, by the way what level is it gonna be?\n";
    waitForEnter();
    if(character.getCharactersStory().HelpedGirlNearGuild == true){
        std::cout << character.getCharacterName() << ": My teammates said that we could go on B+ mission.\n";
    }
    else if (character.getCharactersStory().HelpedGirlNearGuild == false) {
        std::cout << character.getCharacterName() << ": My teammates said that we could go on C- mission\n";
    }
    waitForEnter();
    std::cout << "Chlorinde: Its nice, luckily you want do some job as saving some stray kitten on tier F- haha\n";
    waitForEnter();
    std::cout << "Chlorinde: " << character.getCharacterName() << " can you please clear up the table please?\n";
    waitForEnter();
    std::cout << character.getCharacterName() <<": yea, of course\n";
    waitForEnter();
    std::cout << "While you were clearing the table and washing dishes you could not hear what girls where talking about.\n";
    waitForEnter();
    std::cout << "Chlorinde: Hey Amanda, i know its hard to understand but please dont tell him about his level or ask him.\n";
    waitForEnter();
    std::cout << "Amanda: umh, well i understand that he was training by Erebrus, but he can check his level by himself no?\n";
    waitForEnter();
    std::cout << "Chlorinde: to be honest, we blocked him this ability, i need you to protect him of knowing his level, and becoming selfish and greedy.\n";
    waitForEnter();
    std::cout << "Amanda: haha, of course, but what must his level of he could become greedy or selfish";
    waitForEnter();
    std::cout << "Chlorinde: Fewh, please dont say anything weird, but now his level is around 849.\n";
    waitForEnter();
    std::cout << "Amanda:(silently screaming) WHAT!? 849!? BUT ISNT THE HIGHEST LEVEL IN THE WORLD IS 87!?\n";
    waitForEnter();
    std::cout << "Chlorinde: For the missions that showed in the guild, truly level 90 will be enough, but there is much more dangers in our world.\n";
    waitForEnter();
    std::cout << "Chlorinde: so you must understand now why do i want to protect him, now he is using only around 0.01 percent of his powers, so he need good companions for now.\n";
    waitForEnter();
    std::cout << "Chlorinde: when he will understand his power, we will give him ability to control whole his strenght.\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": Im finished, it was very fun time auntie and Amanda, but i need go prepare to my tomorrows mission.\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": Bye auntie, bye Amanda, i hope will meet like this again soon.\n";
    waitForEnter();
    std::cout << "Girls: Goodbye, we wish you luck on mission!\n";
    waitForEnter();
    std::cout << "You leaved the Great Library and headed to the hotel in expectations for tomorrow.\n";
    nextScene(character, game, gettingReadyForMission);
}
void gettingReadyForMission(Character& character, Game &game){
    clearScreen();
    std::cout << "\n\n\n\n\t\t\t\t|-----------|\n"
              << "\t\t\t\t|   DAY 3   |\n"
              << "\t\t\t\t|-----------|";
    waitForEnter();
    clearScreen();
    std::cout << "New day, and this is the DAY you are goind on your first mission as an adventurer. Whole night you nervous\n"
    <<"because it was your first mission, and also beeing proud of yourself, your biggest dream and goal becomming real.\n";
    waitForEnter();
    std::cout << "So you packed all your stuff to your bag, and left the room, you met Amanda in the corridor, she wished you\n"
    <<"luck on your first mission and blessed you with regeneration spell.\n";
    waitForEnter();
    std::cout << "Town in the morning was as usual, quite and calm, pubs and caffees started to open, students were going to schools\n"
    <<"students to the Mage Union university, things were just the way they should be.\n";
    waitForEnter();
    std::cout << "When you got closer to the adventurers guild hall, the atmosphere changed, many adventurers were heading on their\n"
    <<"missions, the table with task were crowded around with adventurers choosing their next mission.\n";
    waitForEnter();
    if(character.getCharactersStory().HelpedGirlNearGuild == true){
        std::cout << "You saw your teammates, who will fight with you back to back, Llarva, Haemir, Soliana\n";
        nextScene(character, game, missionWithSoliana);
    }
    else if (character.getCharactersStory().HelpedGirlNearGuild == false) {
        std::cout << "You saw your teammates, who will fight with you back to back, Llarva and Haemir\n";
        nextScene(character, game, missionWithoutSoliana);
    }
}

void missionWithSoliana(Character &character, Game &game){
    int choise = 0;
    clearScreen();
    std::cout << character.getCharacterName() << ": Hi guys! Ready for the mission?\n";
    waitForEnter();
    std::cout << "Haemir: I see you are full of enthusiasm, HA-HA-HA\n";
    waitForEnter();
    std::cout << "Llarva: yeah, good morning to you " << character.getCharacterName() << " , you slept well? We will need lots of strenght.\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": I slept well, i guess... But im full of energy, i can beat even a dragon!\n";
    waitForEnter();
    std::cout << "Soliana: thats good, battle spirit is half of the completed mission.\n";
    waitForEnter();
    std::cout << "Haemir: If we are all ready, lets go, HA-HA-HA!\n";
    waitForEnter();
    std::cout << "Soliana: uhgm-m... maybe i will seem silly but... shouldn`t our team get a name??\n";
    waitForEnter();
    std::cout << "You and Haemir: HA-HA-HA-HA!\n";
    waitForEnter();
    std::cout << "Soliana *embarrassed*: nevermind, forget what i said!\n";
    waitForEnter();
    std::cout << character.getCharacterName() << ": No-no-no, i think thats a really good idea, how should we name our team?\n";
    waitForEnter();
    std::cout << "Soliana: Veil and Steel?\n";
    waitForEnter();
    std::cout << "Haemir: Naaah, it should be Avangard of the Abyss.\n";
    waitForEnter();
    std::cout << "Llarva: id like it to be, Shroud and Aegis\n";
    waitForEnter();
    std::cout << "Soliana: your mission, you need to choose " << character.getCharacterName() << "\n";
    waitForEnter();
    std::cout << "How shoul we name our party?:\n1. Veil and Steel\n2. Avangard of the Abyss.\n3. Shround and Aegis ";
    while (!(std::cin >> choise) || choise != 1 && choise != 2 && choise != 3) {
        if(!(std::cin) || choise != 1 && choise != 2 && choise != 3){
            std::cout << "Incorrect input!";
            std::cin.clear();std::cin.ignore(10000, '\n');
        }
    }

    if(choise == 1){
        character.getCharactersStory().partyName = "Veil and Steel";
        saveGame(game.getCharacters());
        std::cout<<character.getCharacterName()<<": I think it should be Veil and Steel.\n";
        waitForEnter();
        std::cout<<"Soliana: yeah its a good choise\n";;
        waitForEnter();
    }
    else if(choise == 2){
        character.getCharactersStory().partyName = "Avanguards of the Abyss";
        saveGame(game.getCharacters());
        std::cout<<character.getCharacterName()<<": I think Avanguards of the Abyss will suit us.\n";
        waitForEnter();
        std::cout<<"Haemir: HA-HA-HA! WITH THAT NAME WE WILL DESTROY EVERYONE\n";
        waitForEnter();
    }
    else if(choise == 3){
        character.getCharactersStory().partyName = "Shroud and Aegis";
        saveGame(game.getCharacters());
        std::cout<<character.getCharacterName()<<": I think Shroud and Aegis describes us perfectly.\n";
        waitForEnter();
        std::cout<<"Llarva: mhm, you chose the right one ;)\n";
        waitForEnter();
    }
    clearScreen();
    std::cout << "";

}

void missionWithoutSoliana(Character &character, Game &game){
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
            saveGame(game.getCharacters());
            choiseSucces = true;        
        }
        else{
            std::cout << "Wrong input!";
            std::cin.clear();std::cin.ignore(10000,'\n');
        }
    }
    
}
