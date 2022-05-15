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
    cout << " Kentucky Fried Kitties" << endl;
    cout << "   ________________" << endl;
    cout << "  | 1 - MENU       |" << endl;
    cout << "  | 2 - ZAMOWIENIA |" << endl;
    cout << "  | 3 - REZERWACJA |" << endl;
    cout << "  | 4 - PRODUKTY   |" << endl;
    cout << "  |________________|" << endl;
    cout << "   Wybierz sekcje: ";
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
        case 3:
            system("CLS");
            cout << "Zarezerwuj - 1 :: Odrezerwuj - 2";
            cin >> b;
            switch(b)
            {
                case 1:
                    Rezerwacja::wyswietlStoliki();
                    cout << "Zarezerwuj stolik wybierajac numer: ";
                    cin >> numerRezerwacja;
                    Rezerwacja::zarezerwuj(numerRezerwacja - 1);
                    system("CLS");
                    Rezerwacja::wyswietlStoliki();
                    break;
                case 2:
                    Rezerwacja::wyswietlStoliki();
                    cout << "Odrezerwuj stolik wybierajac numer: ";
                    cin >> numerRezerwacja;
                    Rezerwacja::odrezerwuj(numerRezerwacja - 1);
                    system("CLS");
                    Rezerwacja::wyswietlStoliki();
                    break;
                default:
                    cout << "ERROR" << endl;
                    break;
            }
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
