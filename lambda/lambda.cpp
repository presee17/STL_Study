#include <iostream>
#include <algorithm>
#include "game.h"
using namespace std;

int main()
{
    Game game(0);
    game.dieEvent(0.1);
    game.dieEvent(0.2);
    game.dieEvent(0.3);
    
    // �Լ� ��ü ���
    struct FindDieUser
    {
        bool operator()(User& tUser) const {
            return tUser.isDie();
        }
    };
    
    __int32 total_die_people = count_if(game.getBegin(), game.getEnd(), FindDieUser());
    printf("������� �� : %d \n", total_die_people);

    // ���� ���1
    auto find_die_user = [](User& tUser) -> bool {return tUser.isDie(); };
    total_die_people = count_if(game.getBegin(), game.getEnd(), find_die_user);
    printf("������� �� : %d \n", total_die_people);

    // ���� ���2
    total_die_people = 0;
    auto find_die_user2 = [&total_die_people](User& tUser) { if (tUser.isDie()) ++total_die_people; };
    for_each(game.getBegin(), game.getEnd(), find_die_user2);
    printf("������� �� : %d \n", total_die_people);

}