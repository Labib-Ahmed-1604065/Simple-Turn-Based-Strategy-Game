#include "Single_player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;


int single_player::s_player(pc &a, npc &b, single_player &s)
{


    while(1)
 {
    s.greet();
    s.reset_var(a,b);
    while(1)
    {s.show_var(a,b);

    if(a.hp<=0)
    {
        s.lose(b);

    }
    else if (b.hp<=0)
    {
        s.win();
    }
    else if(a.hp>0&&b.hp>0)
      {     a.choice(a,b,s);
            b.choice(a,b);
          continue;}
    if(s.game_choice())
    {
        break;
    }
    else
    {
        return 0;
    }



 }
}
}

int single_player::greet()
{
    system("cls");
    cout<<"\t\t\t\t\tWelcome to the single player.\n";

    return 0;
}
int single_player::reset_var(pc &a, npc &b)
{

    a.hp=150,a.up=3;
    b.hp=150,b.up=3;
return 0;
}

int single_player::show_var(pc a, npc b)
{
    cout<<"\t    Hitpoint: "<<a.hp<<"   Ultimate Point: "<<a.up
    <<"   Enemy Hitpoint: "<<b.hp<<"   Enemy Ultimate Point: "<<b.up<<endl;
    return 0;
}

void single_player::win()
{

cout<<"\nYou have defeated the beast.\n";
}
void single_player::lose(npc &b)
{
if(b.hp<=0)
    cout<<"You might have defeated the beast. But since you died in the process...";
    cout<<"\nYou lost.\nBut you can always fight again.\n";

}
int single_player::game_choice()
{

    cout<<"Press 0 and enter to go to main menu.\n"
    <<"Press any other number to start again.\n";
    cin>>ch1;
    return ch1;

}
int pc::choice(pc &a,npc &b,single_player &s)
{
    c=0;
    cout<<"\n\t\t\t\t\t     What will you use?"<<endl;
    while(1)
   {
    cout<<"\t\t\t\t\t     (1) Sword"<<endl
        <<"\t\t\t\t\t     (2) Magic\n"
        <<"\t\t\t\t\t     (3) Summon Ultimate\n"
        <<"\n\t\t\t\t\t Make your choice (1/2/3)\n\t\t\t\t\t\t      ";

    cin>>c;
Sleep(200);
system("cls");
    cout<<"                                                                                     "<<endl
        <<"                                   YYY    YYY    OOOOOO     UUU     UUU  RRRRRRRR    "<<endl
        <<"                                    YYY  YYY    OO    OO    UUU     UUU  RRR   RRR   "<<endl
        <<"                                      YYYY     OO      OO   UUU     UUU  RRR   RRR   "<<endl
        <<"                                       YY      OO      OO   UUU     UUU  RRRRRRR     "<<endl
        <<"                                       YY      OO      OO   UUU     UUU  RRR RRRR    "<<endl
        <<"                                       YY       OO    OO     UUU   UUU   RRR   RRR   "<<endl
        <<"                                      YYYY       OOOOOO        UUUUU     RRR    RRR  "<<endl
        <<"                                                     "<<endl
        <<"                                                                                     "<<endl
        <<"                                  TTTTTTTTTTT  UUU     UUU  RRRRRRRR     NN      NN  "<<endl
        <<"                                  TTTTTTTTTTT  UUU     UUU  RRR   RRR    NNN     NN  "<<endl
        <<"                                      TTT      UUU     UUU  RRR   RRR    NN NN   NN  "<<endl
        <<"                                      TTT      UUU     UUU  RRRRRRR      NN  NN  NN  "<<endl
        <<"                                      TTT      UUU     UUU  RRR RRRR     NN   NN NN  "<<endl
        <<"                                      TTT       UUU   UUU   RRR   RRR    NN    NNNN  "<<endl
        <<"                                      TTT         UUUUU     RRR    RRR   NN      NN  "<<endl;
        Sleep(1000);
    if(c==1)            //branch
    {   if(up!=3)
        up++;
        sword(b);
        break;
    }
    else if(c==2)       //of
    {   if(up!=3)
        up++;
        magic(b);
        break;
    }                   //player

    else if(c==3)
    {   if(up==3)
        {   up=0;
            ultimate(b);  //choices
            break;}
        system("cls");
             cout<<"You don't have enough ultimate point."
             <<" Try another move.\n";
             s.show_var(a,b);
            continue;
    }
    else if(c!=1&&c!=2&&c!=3)
        {  system("cls");
             cout<<"Wrong choice.\n";
             s.show_var(a,b);
            continue;
        }
}   return 0;
}

int pc::sword(npc &b)
{
    system("cls");
    b.hp-=7;
    cout<<"                                             You used your sword\n\n";
    cout<<"                                                                                      "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                       *       **<******              "<<endl
        <<"                                        *****         **      ***********             "<<endl
        <<"                                       *******       **        ****** **              "<<endl
        <<"                                       *******      ***        ***** *****            "<<endl
        <<"                                        *****      ***          ** ****  ***          "<<endl
        <<"                                         ***      ***          ** *** ***** *         "<<endl
        <<"                                       *******  ******        ****    ***** *         "<<endl
        <<"                                      *********  ***          *       ***** *         "<<endl
        <<"                                      *************           *       ***** *         "<<endl
        <<"                                      ******** ***            *      ****** *         "<<endl
        <<"                                      ********                *      *    * *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                       ******                 ***************         "<<endl
        <<"                                       ******                     *********           "<<endl
        <<"                                       ******                     *********           "<<endl;
Sleep(200);
system("cls");
    cout<<"                                             You used your sword\n\n";
    cout<<"                                                                                      "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                               **<******              "<<endl
        <<"                                        *****                 ***********             "<<endl
        <<"                                       *******                 ****** **              "<<endl
        <<"                                       *******                 ***** *****            "<<endl
        <<"                                        *****                   ** ****  ***          "<<endl
        <<"                                         ***                   ** *** ***** *         "<<endl
        <<"                                       *******                ****    ******* *       "<<endl
        <<"                                      **********    *         *       ********  *     "<<endl
        <<"                                      *********************** *       ***** * **  *   "<<endl
        <<"                                      ********  *****************    ****** ** **     "<<endl
        <<"                                      ********      *         *      *    * **        "<<endl
        <<"                                      ********                *      ********         "<<endl
        <<"                                       ******                 ***************         "<<endl
        <<"                                       ******                     *********           "<<endl
        <<"                                       ******                     *********           "<<endl;
Sleep(200);
system("cls");

    cout<<"                                             You used your sword\n\n";
    cout<<"                                                                                      "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                               **<******              "<<endl
        <<"                                        *****                 ***********             "<<endl
        <<"                                       *******                 ****** **              "<<endl
        <<"                                       *******                 ***** *****            "<<endl
        <<"                                        *****                   ** ****  ***    -7    "<<endl
        <<"                                         ***                   ** *** ***** *         "<<endl
        <<"                                       *******                ****    ******* *       "<<endl
        <<"                                      **********    *         *       ********  *     "<<endl
        <<"                                      *********************** *       ***** * **  *   "<<endl
        <<"                                      ********  *****************    ****** ** **     "<<endl
        <<"                                      ********      *         *      *    * **        "<<endl
        <<"                                      ********                *      ********         "<<endl
        <<"                                       ******                 ***************         "<<endl
        <<"                                       ******                     *********           "<<endl
        <<"                                       ******                     *********           "<<endl;
Sleep(500);
system("cls");
    return 0;
}
int pc::magic(npc &b)
{
    system("cls");
    b.hp-=14;
    hp-=6;
    cout<<"                                             You used your magic\n\n";
    cout<<"                                                                                     "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                               **<******              "<<endl
        <<"                                        *****                 ***********             "<<endl
        <<"                                       *******                 ****** **              "<<endl
        <<"                                       *******                 ***** *****            "<<endl
        <<"                                        *****                   ** ****  ***          "<<endl
        <<"                                         ***      **           ** *** ***** *         "<<endl
        <<"                                       ********  ***          ****    ***** *         "<<endl
        <<"                                      *************           *       ***** *         "<<endl
        <<"                                      ******** ***            *       ***** *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                      ********                *      *    * *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                       ******                 ***************         "<<endl
        <<"                                       ******                     *********           "<<endl
        <<"                                       ******                     *********           "<<endl;

        Sleep(200);
        system("cls");
        cout<<"                                             You used your magic\n\n";
    cout<<"                                                                                      "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                               **<******              "<<endl
        <<"                                        *****                 ***********             "<<endl
        <<"                                       *******                 ***    **              "<<endl
        <<"                                       *******             *** *   *******            "<<endl
        <<"                                        *****           ***     *** ***  ***          "<<endl
        <<"                                         ***       ** **   *** ** *** ***** *         "<<endl
        <<"                                       ********   ****   **   ****    ***** *         "<<endl
        <<"                                      ***************         *       ***** *         "<<endl
        <<"                                      ******** ***   **  **   *       ***** *         "<<endl
        <<"                                      ********         **  ***       ****** *         "<<endl
        <<"                                      ********           **   ****   *    * *         "<<endl
        <<"                                      ********             ****   ****   ** *         "<<endl
        <<"                                       ******                 *****  ********         "<<endl
        <<"                                       ******                     ***  ****           "<<endl
        <<"                                       ******                     *********           "<<endl;
         Sleep(200);
        system("cls");
        cout<<"                                             You used your magic\n\n";
    cout<<"                                                   "<<endl
        <<"                                                                ******* ****      ****"<<endl
        <<"                                                               **<******     *****    "<<endl
        <<"                                        *****                 *******   *****      ***"<<endl
        <<"                                       *******                 ***    ***     ****    "<<endl
        <<"                                       *******             *** *   ***   ****         "<<endl
        <<"                                        *****           ***     *** ****  **  -14     "<<endl
        <<"                                 -6      ***       ** **   *** ** ****      ******    "<<endl
        <<"                                       ********   ****   **   ****     ******         "<<endl
        <<"                                      ***************         *       ***** * ****    "<<endl
        <<"                                      ******** ***   **  **   *       ***** *         "<<endl
        <<"                                      ********         **  ***       ****** * ****    "<<endl
        <<"                                      ********           **   ****   *  *****         "<<endl
        <<"                                      ********             ****   ****   ** *****     "<<endl
        <<"                                       ******                 ****     ******     ****"<<endl
        <<"                                       ******                     ****    * ****      "<<endl
        <<"                                       ******                     *********      *****"<<endl;
         Sleep(500);
        system("cls");
    return 0;
}

int pc::ultimate(npc &a)
{   system("cls");
cout<<"                                                You summoned ultimate\n\n";
    cout<<"                                                                                     "<<endl
        <<"                                                ***             *******               "<<endl
        <<"                                               *****           **<******              "<<endl
        <<"                                        *****   ***           ***********             "<<endl
        <<"                                       *******  ***            ****** **              "<<endl
        <<"                                       *******  ***            ***** *****            "<<endl
        <<"                                        *****   ***             ** ****  ***          "<<endl
        <<"                                         ***   ***             ** *** ***** *         "<<endl
        <<"                                       **********             ****    ***** *         "<<endl
        <<"                                      **********              *       ***** *         "<<endl
        <<"                                      *********               *       ***** *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                      ********                *      *    * *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                       ******                 ***************         "<<endl
        <<"                                       ******                     *********           "<<endl
        <<"                                       ******                     *********           "<<endl;
Sleep(200);
system("cls");
cout<<"                                                You summoned ultimate\n\n";
    cout<<"                                                                | | | | | |           "<<endl
        <<"                                                ***             |         |           "<<endl
        <<"                                               *****           *| | | | | |           "<<endl
        <<"                                        *****   ***           **|         |           "<<endl
        <<"                                       *******  ***            *| | | | | |           "<<endl
        <<"                                       *******  ***            *|         |           "<<endl
        <<"                                        *****   ***             | | | | | |*          "<<endl
        <<"                                         ***   ***             /           \\*         "<<endl
        <<"                                       **********             / / /  |  \\ \\ \\         "<<endl
        <<"                                      **********              *       ***** *         "<<endl
        <<"                                      *********               *       ***** *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                      ********                *      *    * *         "<<endl
        <<"                                      ********                *      ****** *         "<<endl
        <<"                                       ******                 ***************         "<<endl
        <<"                                       ******                     *********           "<<endl
        <<"                                       ******                     *********           "<<endl;

        Sleep(100);
system("cls");
cout<<"                                                You summoned ultimate\n\n";
    cout<<"                                                              | | | | | | | |         "<<endl
        <<"                                                ***           |             |         "<<endl
        <<"                                               *****          | | | | | | | |         "<<endl
        <<"                                        *****   ***           |             |         "<<endl
        <<"                                       *******  ***           | | | | | | | |         "<<endl
        <<"                                       *******  ***           |             |         "<<endl
        <<"                                        *****   ***           | | | | | | | |         "<<endl
        <<"                                         ***   ***            |             |    -23  "<<endl
        <<"                                       **********             | | | | | | | |         "<<endl
        <<"                                      **********              |             |         "<<endl
        <<"                                      *********               | | | | | | | |         "<<endl
        <<"                                      ********                |             |         "<<endl
        <<"                                      ********                | | | | | | | |         "<<endl
        <<"                                      ********               /               \\       "<<endl
        <<"                                       ******               / / / /  |  \\ \\ \\ \\      "<<endl
        <<"                                       ******              /                   \\     "<<endl
        <<"                                       ******             / / / / /  |  \\ \\ \\ \\ \\    "<<endl;
Sleep(500);
system("cls");
    a.hp-=23;
    return 0;
}

int npc::choice(pc &a, npc &b)
{srand(time(0));

   if(up==3)
    c=rand()%3+1;
   else
    {
        c=rand()%2+1;
    up++;}

    Sleep(200);
system("cls");
cout<<endl;
    cout<<"    OOOOO     PPPPPPPPP  PPPPPPPPP     OOOOO     NN       NN  EEEEEEEEEEE  NN       NN  TTTTTTTTTTTTT ''   SSSSSSSS"<<endl
        <<"  OO     OO    PPP   PPP  PPP   PPP  OO     OO   NNN      NN  EEEEEEEEEEE  NNN      NN  TTTTTTTTTTTTT ''  SSSSSSSSSSS"<<endl
        <<" OO       OO   PPP   PPP  PPP   PPP OO       OO  NN NN    NN  EEE          NN NN    NN       TTT      '   SSSS     SSS"<<endl
        <<" OO       OO   PPPPPPPP   PPPPPPPP  OO       OO  NN  NN   NN  EEEEEE       NN  NN   NN       TTT      '     SSSSSS "<<endl
        <<" OO       OO   PPP        PPP       OO       OO  NN   NN  NN  EEEEEE       NN   NN  NN       TTT               SSSSS "<<endl
        <<" OO       OO   PPP        PPP       OO       OO  NN    NN NN  EEE          NN    NN NN       TTT          SSS    SSSS"<<endl
        <<"  OO     OO    PPP        PPP        OO     OO   NN      NNN  EEEEEEEEEEE  NN      NNN       TTT          SSSSSSSSSSS"<<endl
        <<"    OOOOO     PPPPP      PPPPP         OOOOO     NN       NN  EEEEEEEEEEE  NN       NN      TTTTT          SSSSSSSSS"<<endl
        <<"                                                                                                                      "<<endl
        <<"                                                                                      "<<endl
        <<"                                  TTTTTTTTTTT  UUU     UUU  RRRRRRRR     NN      NN                                   "<<endl
        <<"                                  TTTTTTTTTTT  UUU     UUU  RRR   RRR    NNN     NN                                   "<<endl
        <<"                                      TTT      UUU     UUU  RRR   RRR    NN NN   NN                                   "<<endl
        <<"                                      TTT      UUU     UUU  RRRRRRR      NN  NN  NN  "<<endl
        <<"                                      TTT      UUU     UUU  RRR RRRR     NN   NN NN  "<<endl
        <<"                                      TTT       UUU   UUU   RRR   RRR    NN    NNNN  "<<endl
        <<"                                      TTT         UUUUU     RRR    RRR   NN      NN  "<<endl;
        Sleep(1000);
system("cls");
    if(c==1)
    {
        b.sword(a);
    }
    else if(c==2)
    {
        b.magic(a);
    }
    else if(c==3)
    {
        b.ultimate(a);

    }
}

int npc::sword(pc &a)
{
    cout<<"                                      Giant: I'm gonna kill you with my sword.\n"
        <<"                                                 Enemy used sword\n\n";
    cout<<"                                                                                     "<<endl
        <<"                                                      *        *******               "<<endl
        <<"                                                      **      **<******              "<<endl
        <<"                                       *****          **     ***********             "<<endl
        <<"                                      *******         ***     ****** **              "<<endl
        <<"                                      *******         ***     ***** *****            "<<endl
        <<"                                       *****         *****     ** ****  ***          "<<endl
        <<"                                        ***           ***     ** *** ***** *         "<<endl
        <<"                                      *******        ***********     ***** *         "<<endl
        <<"                                     *********       *  ******       ***** *         "<<endl
        <<"                                     *********       *********       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
        Sleep(200);
        system("cls");


    cout<<"                                      Giant: I'm gonna kill you with my sword.\n"
        <<"                                                 Enemy used sword\n\n";
    cout<<"                                                           -                          "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                               **<******              "<<endl
        <<"                                        *****                 ***********             "<<endl
        <<"                                       *******                 ****** **              "<<endl
        <<"                                       *******                 ***** *****            "<<endl
        <<"                                        *****                   ** ****  ***          "<<endl
        <<"                                         ***                   ** *** ***** *         "<<endl
        <<"                                       *******               ****     ***** *         "<<endl
        <<"                                     **********            ****       ***** *         "<<endl
        <<"                                   * **********         * *****       ***** *         "<<endl
        <<"                                  * * *********************** *      ****** *         "<<endl
        <<"                                   * ******* **************   *      *    * *         "<<endl
        <<"                                     * *******          *     *      ****** *         "<<endl
        <<"                                      *******                 ***************         "<<endl
        <<"                                        *****                     *********           "<<endl
        <<"                                        *****                     *********           "<<endl;
    Sleep(200);
    system("cls");
    cout<<"                                      Giant: I'm gonna kill you with my sword.\n"
        <<"                                                 Enemy used sword\n\n";
    cout<<"                                                                                      "<<endl
        <<"                                                                *******               "<<endl
        <<"                                                               **<******              "<<endl
        <<"                                        *****                 ***********             "<<endl
        <<"                                       *******                 ****** **              "<<endl
        <<"                                       *******                 ***** *****            "<<endl
        <<"                                    -6  *****                   ** ****  ***          "<<endl
        <<"                                         ***                   ** *** ***** *         "<<endl
        <<"                                       *******               ****     ***** *         "<<endl
        <<"                                     **********            ****       ***** *         "<<endl
        <<"                                   * **********         * *****       ***** *         "<<endl
        <<"                                  * * *********************** *      ****** *         "<<endl
        <<"                                   * ******* **************   *      *    * *         "<<endl
        <<"                                     * *******          *     *      ****** *         "<<endl
        <<"                                      *******                 ***************         "<<endl
        <<"                                        *****                     *********           "<<endl
        <<"                                        *****                     *********           "<<endl;
    Sleep(500);
    system("cls");
    a.hp-=6;
    return 0;
}

int npc::magic(pc &a)
{
    cout<<"                                       Giant: My magic will burn you.\n"
        <<"                                                Enemy used magic.\n\n";
    cout<<"                                                               *******               "<<endl
        <<"                                                              **<******              "<<endl
        <<"                                                             ***********             "<<endl
        <<"                                       *****                  **********             "<<endl
        <<"                                      *******                   **** **              "<<endl
        <<"                                      *******                 ***** *****            "<<endl
        <<"                                       *****                   ** ****  ***          "<<endl
        <<"                                        ***                   ** *** ***** *         "<<endl
        <<"                                      *******                ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
    Sleep(200);
    system("cls");

    cout<<"                                       Giant: My magic will burn you.\n"
        <<"                                                Enemy used magic.\n\n";
    cout<<"                                                               *******               "<<endl
        <<"                                                              **<******              "<<endl
        <<"                                                             ***********             "<<endl
        <<"                                       *****             ***  **********             "<<endl
        <<"                                      *******           *   *   **** **              "<<endl
        <<"                                      *******            ***  ***** *****            "<<endl
        <<"                                       *****                   ** ****  ***          "<<endl
        <<"                                        ***                   ** *** ***** *         "<<endl
        <<"                                      *******                ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;

         Sleep(200);
    system("cls");

    cout<<"                                       Giant: My magic will burn you.\n"
        <<"                                                Enemy used magic.\n\n";
    cout<<"                                                               *******               "<<endl
        <<"                                                              **<******              "<<endl
        <<"                                                             ***********             "<<endl
        <<"                                       *****     ***          **********             "<<endl
        <<"                                      *******   *   *           **** **              "<<endl
        <<"                                      *******    ***          ***** *****            "<<endl
        <<"                                       *****                   ** ****  ***          "<<endl
        <<"                                        ***                   ** *** ***** *         "<<endl
        <<"                                      *******                ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;

    Sleep(100);
    system("cls");

    cout<<"                                       Giant: My magic will burn you.\n"
        <<"                                                Enemy used magic.\n\n";
    cout<<"                                                               *******               "<<endl
        <<"                                        *                     **<******              "<<endl
        <<"                                         * *                 ***********             "<<endl
        <<"                                       **** *                 **********             "<<endl
        <<"                                      ****** *                  **** **              "<<endl
        <<"                                      ****** *                ***** *****            "<<endl
        <<"                                       **** *                  ** ****  ***          "<<endl
        <<"                                        ** *                  ** *** ***** *         "<<endl
        <<"                                      *** ***                ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
    Sleep(100);
    system("cls");

    cout<<"                                       Giant: My magic will burn you.\n"
        <<"                                                Enemy used magic.\n\n";
    cout<<"                                                               *******               "<<endl
        <<"                                        *                     **<******              "<<endl
        <<"                                         * *                 ***********             "<<endl
        <<"                                       **** *                 **********             "<<endl
        <<"                                      ****** *                  **** **              "<<endl
        <<"                                      ****** *                ***** *****            "<<endl
        <<"                                       **** *                  ** ****  ***          "<<endl
        <<"                                        ** *                  ** *** ***** *         "<<endl
        <<"                                 -14  *** ***                ***     ***** *     -4  "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
        Sleep(500);
        system("cls");
         a.hp-=14;
    hp-=4;
    return 0;
}

int npc::ultimate(pc &a)
{
    up=0;
    a.hp-=23;
    cout<<"                                        Giant: KA!! ME!! HA!! ME!! HAAAAA!!!!\n";
    cout<<"                                              Enemy summoned ultimate.\n\n";
    cout<<"                                                               *******               "<<endl
        <<"                                                              **<******              "<<endl
        <<"                                                           /************             "<<endl
        <<"                                       *****              /** **********             "<<endl
        <<"                                      *******            /***O  **** **              "<<endl
        <<"                                      *******             \\******** *****            "<<endl
        <<"                                       *****               \\*_ ** ****  ***          "<<endl
        <<"                                        ***                   ** *** ***** *         "<<endl
        <<"                                      *******                ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
    Sleep(300);
    system("cls");

    cout<<"                                        Giant: KA!! ME!! HA!! ME!! HAAAAA!!!!\n";
    cout<<"                                              Enemy summoned ultimate.\n";
    cout<<"                                 __________________                                  "<<endl;
    cout<<"                             \\                     *____       *******               "<<endl
        <<"                               \\                        *___  **<******              "<<endl
        <<"                                 \\              *   *       \\***********             "<<endl
        <<"                                   \\   *****            *    \\**********             "<<endl
        <<"                                   \\  *******              *    **** **              "<<endl
        <<"                                  /   *******                /***** *****            "<<endl
        <<"                                /      *****           * ___/  ** ****  ***          "<<endl
        <<"                              /         ***  *    * ____*     ** *** ***** *         "<<endl
        <<"                            /_________*******______*         ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
    Sleep(200);
    system("cls");
 cout<<"                                        Giant: KA!! ME!! HA!! ME!! HAAAAA!!!!\n";
    cout<<"                                              Enemy summoned ultimate.\n";
    cout<<"                                 __________________                               "<<endl;
    cout<<"                             \\                     *____       *******             "<<endl
        <<"                               \\                        *___  **<******            "<<endl
        <<"                                 \\              *   *       \\***********         "<<endl
        <<"                                   \\   *****            *    \\**********         "<<endl
        <<"                          -23      \\  *******                   **** **      "<<endl
        <<"                                  /   *******                /***** *****            "<<endl
        <<"                                /      *****           * ___/  ** ****  ***          "<<endl
        <<"                              /         ***  *    * ____*     ** *** ***** *         "<<endl
        <<"                            /_________*******______*         ***     ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *       ***** *         "<<endl
        <<"                                     *********               *      ****** *         "<<endl
        <<"                                     *********               *      *    * *         "<<endl
        <<"                                      *******                *      ****** *         "<<endl
        <<"                                       *****                 ***************         "<<endl
        <<"                                       *****                     *********           "<<endl
        <<"                                       *****                     *********           "<<endl;
    Sleep(500);
    system("cls");
    return 0;

}
