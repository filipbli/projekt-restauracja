#include <iostream>
#include <windows.h>
#include "Home.h"
#include "Menu.h"
#include "Zamowienia.h"

using namespace std;

int main()
{

    Menu menu;
    Home home;
    Zamowienia zamowienie;

    home.wyswietlHome();
    return 0;
}
