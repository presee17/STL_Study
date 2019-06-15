#include <iostream>
#include <vector>
#include <algorithm>
#include "game.h"

int main()
{
    Game game(100);
    game.dieEvent(0.5);
    auto find_die_user = [](User& tUser) -> bool {return tUser.isDie(); };
    __int32 total_die_people = count_if(game.getBegin(), game.getEnd(), find_die_user);
    printf("Á×Àº»ç¶÷ ¼ö : %d \n", total_die_people);
}