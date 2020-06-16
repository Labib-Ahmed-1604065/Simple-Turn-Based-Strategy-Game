#include <bits/stdc++.h>
#include <conio.h>
#include "main_menu.h"
#include "single_player.h"
#include "multiplayer.h"
using namespace std;

int main()
{
    int partialexit;
    main_menu mn;
    again:
    mn.menu_show();
    mn.main_menu_in();
    partialexit=mn.play();
    if(partialexit==1)  goto again;
    getch();
    return 0;
}
