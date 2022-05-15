#include <iostream>
#include <windows.h>
#include "Home.h"
#include "Menu.h"
#include "Zamowienia.h"
#include "Produkty.h"
#include "Rezerwacja.h"

using namespace std;

int main()
{
    Home home;
    Menu menu;
    Zamowienia zamowienie;
    Produkty produkt;
    Rezerwacja rezerwacja;
    home.wyswietlHome();
    return 0;
}
