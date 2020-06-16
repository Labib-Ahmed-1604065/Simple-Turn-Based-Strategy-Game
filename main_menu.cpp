#include<bits/stdc++.h>
#include<conio.h>
#include "main_menu.h"
#include "single_player.h"
#include "multiplayer.h"
#include<iostream>
#include<string>
using namespace std;
///main menu methods
void main_menu::menu_show()
{
    system("cls");
    cout<<"\t\t\tWelcome to the turn based strategy game by Labib, Sharif and Farid."<<endl
        <<"\t\t\t\t\tPress 1 and enter to play single player\n\t\t\t\t\tPress 2 and enter to play multiplayer"<<endl
        <<"\t\t\t\t\tPress 3 and enter to get help\n\t\t\t\t\tPress 4 and enter to exit the game"<<endl;
}
void main_menu::main_menu_in()
{
    cout<<"\t\t\tYour choice:\t";
    cin>>menu_choice;
    system("cls");
}
void main_menu::help()
{
    int help_choice;
    cout<<"\t\t\t\t\tWelcome to HELP!"<<endl;
    cout<<endl<<"\t\t\tPress 1 to get help for single player."<<endl<<"\t\t\tPress 2 to get help for multiplayer."<<endl
    <<"\t\t\tPress 0 to exit help."<<endl;
    cin>>help_choice;
    if(help_choice==1)
    {
        cout<<"\t\t\tWelcome to the help for single player."<<endl<<endl;
        cout<<"In the single player mode you will play against the computer."<<endl;
        cout<<"You and your opponent has two different type of points. One is hitpoint and the other is magic point."<<endl;
        cout<<"The initial hitpoint will be 150. And the initial magic point will be 3."<<endl;
        cout<<"There are three types of attack choice. Sword, magic and ultimate."<<endl;
        cout<<"To use sword you have to press 1 and enter."<<endl<<"To use magic you have to press 2 and enter."<<endl
        <<"To use ultimate you have to press 3 and enter."<<endl;
        cout<<"If you want to use ultimate your magic point must be 3 otherwise you have to choose another option."<<endl;
        cout<<"You can gain magic points by using sword or magic. Sword and magic using requires no magic points."<<endl;
        cout<<"When your opponent's hitpoint becomes zero, you win. When your hitpoint becomes zero, your opponent wins."<<endl;
        cout<<endl<<"press any key to go to main menu."<<endl;
        getch();
    }
    else if(help_choice==2)
    {
        cout<<"\t\t\tWelcome to the help for multiplayer."<<endl<<endl;
        cout<<"In the multiplayer mode a player will play against another player."<<endl;
        cout<<"You and your opponent has two different type of points. One is hitpoint and the other is magic point."<<endl;
        cout<<"The initial hitpoint will be 100. And the initial magic point will be 0."<<endl;
        cout<<"There are three types of attack choice. Sword, magic and ultimate."<<endl;
        cout<<"To use sword you have to press 1 and enter."<<endl
        <<"To use magic or powerful magic you have to press 2 and enter."<<endl
        <<"To use ultimate you have to press 3 and enter."<<endl;
        cout<<"If you want to use magic your magic point must be 3 otherwise you will lose your turn."<<endl
            <<"If you want to use powerful magic your magic point must be 4 otherwise you will lose your turn."<<endl
            <<"If you want to use ultimate your magic point must be 5 otherwise you will lose your turn."<<endl
            <<"You can gain magic points by using sword. Sword using requires no magic points."<<endl;
        cout<<"When your opponent's hitpoint becomes zero, you win. When your hitpoint becomes zero, your opponent wins."<<endl;
        cout<<endl<<"press any key to go to main menu."<<endl;
        getch();
    }
    else if(help_choice==0)
    {
        cout<<endl<<"press any key to go to main menu."<<endl;
        getch();
    }
    system("cls");
}
int main_menu::play()
{
    if(menu_choice==1)///sharif
    {
        single_player s;
        pc a;
        npc b;
        s.s_player(a,b,s);
        return 1;
    }
    else if(menu_choice==2)///labib
    {
        multiplayer m;
        m.m_player();
        return 1;
    }
    else if(menu_choice==3)
    {
        help();
        return 1;
    }
    else
    {
        exit();
        return 0;
    }
}
int main_menu::exit()
{
    system("cls");
    cout<<"\t\t\t\t\tThanks for playing our game. Have a nice day!"<<endl;
    return 0;
}
///main menu methods

