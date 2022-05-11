#include "Home.h"
#include <iostream>
#include <windows.h>

using namespace std;

Home::Home()
{
    //ctor
}

void Home::wyswietlHome()
{
    cout << " ________________" << endl;
    cout << "| 1 - MENU       |" << endl;
    cout << "| 2 - ZAMOWIENIA |" << endl;
    cout << "| 3 - REZERWACJA |" << endl;
    cout << "| 4 - PRODUKTY   |" << endl;
    cout << "|________________|" << endl;
    cout << " Wybierz sekcje: ";
    cin >> a;

    switch(a)
    {
        case 1:
            system("CLS");
            Menu::wyswietlMenu();
            powrot();
            break;
        case 2:
            system("CLS");
            Menu::wyswietlMenu();
            Zamowienia::zamow();
            powrot();
            break;
        case 4:
            system("CLS");
            for(int i = 0; i < 7; i++)
            {
                cout << Zamowienia::nr_produktu[i] + 1 << ") " << Zamowienia::nazwa_produktu[i] << " " << Zamowienia::cena_produktu[i] << "zl" << endl;
                cout << "___________________________" << endl;
            }
            powrot();
            break;
        default:
            cout << "ERROR" << endl;
            break;
    }

}

void Home::powrot()
{
    int a;
    cout << "POWROT KLIKNIJ - 1";
    cin >> a;
    if(a == 1)
    {
        system("CLS");
        wyswietlHome();
    }
    else
    {
        system("CLS");
        Menu::wyswietlMenu();
    }
}

Home::~Home()
{
    //dtor
}
