#pragma once

class Character;
class Game;

class Story{
    int currentScene = 0;

public:
    //Setters
    void setCurrentScene(int newScene);

    //Getters
    
    int getCurrentScene();
};

void clearScreen();
void firstTimeInTown(Character character);
void inTheHotelPart1(Character character);
void chooseScene(Character character);
void waitForEnter();