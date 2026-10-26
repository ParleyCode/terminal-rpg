#pragma once
#include <functional>
#include <iostream>

class Character;
class Game;

class Story{
    int currentScene = 1;

public:
    //Actions
    bool HelpedGirlNearGuild = false;
    std::string partyName = "";
    //Setters
    void setCurrentScene(int newScene);

    //Getters
    
    int getCurrentScene()const;
};

void clearScreen();
void firstTimeInTown(Character& character, Game& game);
void inTheHotelPart1(Character& character, Game& game);
void goingToAdventurersGuild(Character& character, Game& game);
void meetinAuntWithAmanda(Character& character, Game& game);
void gettingReadyForMission(Character& character, Game& game);
void missionWithSoliana(Character& character, Game& game);
void missionWithoutSoliana(Character& character, Game& game);
void chooseScene(Character& character, Game& game);
void nextScene(Character& character, Game& game, std::function<void(Character&, Game&)> scene);
void waitForEnter();