#include <iostream>
#include <windows.h>
#include "Home.h"
#include "Menu.h"
#include "Zamowienia.h"
#include "Produkty.h"

using namespace std;

int main()
{

    Menu menu;
    Home home;
    Zamowienia zamowienie;
    Produkty produkt;

    home.wyswietlHome();
    return 0;
}
