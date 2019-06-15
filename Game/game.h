#ifndef _Game_
#define _Game_

#include <vector>
#include "user.h"
using namespace std;

class Game
{
public:
    Game(int game_id = 0);
    ~Game();
    void dieEvent(double percent);
    vector<User>::iterator getBegin();
    vector<User>::iterator getEnd();
    int getGameID();
private:
    vector<User>* users;
    __int32 game_id;
};
#endif