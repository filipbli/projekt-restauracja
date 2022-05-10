#include "Menu.h"
#include <iostream>
#include <windows.h>

using namespace std;

Menu::Menu()
{
    //ctor
}

void Menu::wyswietlMenu()
{
    cout << "_________________MENU______________________" << endl;
    cout << "|Hamburger: 12zl                          |" << endl;
    cout << "|Hot-dog: 10zl                            |" << endl;
    cout << "|Pizza: 20zl                              |" << endl;
    cout << "|Kebab: 15zl                              |" << endl;
    cout << "|Coca-cola: 6zl                           |" << endl;
    cout << "|Fanta: 5zl                               |" << endl;
    cout << "|Frytki: 8zl                              |" << endl;
    cout << "|                                         |" << endl;
    cout << "|_________________________________________|" << endl;
}

void Menu::ukryjMenu()
{
    system("CLS");
}

Menu::~Menu()
{
    //dtor
}
