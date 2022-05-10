#include <iostream>
#include <windows.h>
#include "Menu.h"

using namespace std;

int main()
{
    Menu menu;
    int a;
    cout << "1 - MENU" << endl;
    cout << "2 - ZAMOWIENIA" << endl;
    cout << "3 - REZERWACJA" << endl;
    cout << "4 - PRODUKTY" << endl;
    cin >> a;
    switch(a)
    {
        case 1:
            system("CLS");
            menu.wyswietlMenu();
            break;
        default:
            cout << "ERROR" << endl;
            break;
    }

    return 0;
}
