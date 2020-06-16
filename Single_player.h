#ifndef SINGLE_PLAYER_H
#define SINGLE_PLAYER_H
class pc;
class npc;
class single_player
{
    int ch1;
public:
    int s_player(pc &a, npc &b, single_player &s);
    int greet();
    int reset_var(pc&, npc&);
    int show_var(pc, npc);
    int game_choice();
    void win();
    void lose(npc&);
    friend class player;
};
#endif // SINGLE_PLAYER_H
class player        //class for single player characters
{
protected:
    int hp;    //hp for hitpoint
    int up;   //up for ultimate point
    int c;
public:
    friend class single_player;
};
class pc:player              //class for the playable character
{
public:
    int choice(pc&, npc&,single_player&);
    int sword(npc&);
    int magic(npc&);
    int ultimate(npc&);
    //Some friend classes and function that might need it's access
    friend class npc;
    friend class single_player;
};
class npc:player          //class for the non-playable character or enemy AI
{
public:                  //also derived class of class player
    int choice(pc&, npc&);
    int sword(pc&);
    int magic(pc&);
    int ultimate(pc&);
    //the same friend classes and function
    friend class pc;
    friend class single_player;
};
