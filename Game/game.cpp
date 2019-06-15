#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "game.h"

using namespace std;

Game::Game(int game_id) {
    this->game_id = game_id;
    this->users = new vector<User>(100);
    printf("게임 %d : 생성\n", game_id);
}
Game::~Game() {
    printf("게임 %d : 종료\n", game_id);
    delete users;
}
void Game::dieEvent(double percent) {
    std::random_device rng;
    std::bernoulli_distribution dist(percent);
    for (auto& user : *users) {
        if (dist(rng)) {
            user.SetDie();
        }
    }
}

vector<User>::iterator Game::getBegin() {
    return users->begin();
}
vector<User>::iterator Game::getEnd() {
    return users->end();
}
int Game::getGameID() {
    return game_id;
}