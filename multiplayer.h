#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H

class multiplayer
{
    std::string name1; ///player 1 name
    std::string name2; ///player 2 name
    int hpp1; ///hit point player 1
    int hpp2; ///hit point player 2
    int mpp1; ///magic point player 1
    int mpp2; ///magic point player 2
    int move1; ///player 1 move
    int move2; ///player 2 move
    int ch2; ///play again choice
public:
    multiplayer()///constructor
    {///initial value
        hpp1=100;
        hpp2=100;
        mpp1=0;
        mpp2=0;
    }
    int m_player();
    void show();
    void name();
    void turn1();
    void turn2();
    void m1();
    void m2();
    void choicep1();
    void choicep2();
    void sowrdp1();///6
    void sowrdp2();
    void magicp1();///11,14
    void magicp2();
    void ultip1();///23
    void ultip2();
    void winp1();
    void winp2();
    int result();
    int playagain();
};
#endif // MULTIPLAYER_H
