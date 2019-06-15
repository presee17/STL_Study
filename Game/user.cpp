#include "user.h"

using namespace std;
User::User() : m_bDie(false) {}
User::~User() {}
void User::SetDie() {
    m_bDie = true;
}
bool User::isDie() {
    return m_bDie;
}
