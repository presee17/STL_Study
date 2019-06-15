#include <memory>
#include <iostream>
#include <algorithm>
#include "game.h"
using namespace std;


void refExample() {
    shared_ptr<Game> shared_game1(new Game(1));
    printf("game1 참조 횟수: %d\n", shared_game1.use_count());
    {
        shared_ptr<Game> shared_game2 = shared_game1;
        printf("game1 참조 횟수: %d\n", shared_game1.use_count());
    }
    printf("game1 참조 횟수: %d\n", shared_game1.use_count());
}

void resetExample() {

    shared_ptr<Game> shared_game1(new Game(1));
    shared_ptr<Game> shared_game2(new Game(2));
    shared_game2.reset(new Game(3));
    printf("다른 인스턴스로 교체 후 game2의 id: %d\n", shared_game2->getGameID());
}
void resetExample2() {

    shared_ptr<Game> shared_game1(new Game(1));
    shared_ptr<Game> shared_game2(new Game(2));
    shared_game2.reset(shared_game1.get());
    printf("다른 인스턴스로 교체 후 game2의 id: %d\n", shared_game2->getGameID());
    printf("game1 참조 횟수: %d\n", shared_game1.use_count());
}

void replaceExample() {
    shared_ptr<Game> shared_game1(new Game(1));
    shared_ptr<Game> shared_game2(new Game(2));
    shared_game2 = shared_game1;
    printf("다른 인스턴스로 교체 후 game2의 id: %d\n", shared_game2->getGameID());
    printf("game1 참조 횟수: %d\n", shared_game1.use_count());
}

void swapExample() {
    shared_ptr<Game> shared_game1(new Game(1));
    shared_ptr<Game> shared_game2(new Game(2));
    shared_game1.swap(shared_game2);
    printf("스왑후 game1의 id: %d\n", shared_game1->getGameID());
    printf("스왑후 game2의 id: %d\n", shared_game2->getGameID());
}
void arrayExample() {
    shared_ptr<Game> shared_game1(new Game[10], std::default_delete<Game[]>());
}
void makeExample() {
    auto shared_game = std::make_shared<Game>(1);
}

int main()
{
    //refExample();
    //resetExample();
    //resetExample2();
    //replaceExample();
    //swapExample();
    //arrayExample();
    //makeExample();

}

