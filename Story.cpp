#include "Story.h"
#include "Game.h"


void chooseScene(){
    Game story;
    switch(story.getSceneNumber()){
        case 1:
        scene_one();
        break;
    }

}
void scene_one(){
    std::cout << "Test";
}