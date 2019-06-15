#ifndef _User_
#define _User_

class User
{
public:
    User();
    ~User();
    void SetDie();
    bool isDie();

private:
    bool m_bDie;
};
#endif