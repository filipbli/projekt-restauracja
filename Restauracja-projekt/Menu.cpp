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
    cout << "|1) Hamburger:    12zl                       |" << endl;
    cout << "|2) Hot-dog:      10zl                       |" << endl;
    cout << "|3) Pizza:        20zl                       |" << endl;
    cout << "|4) Kebab:        15zl                       |" << endl;
    cout << "|5) Coca-cola:    6zl                        |" << endl;
    cout << "|6) Fanta:        5zl                        |" << endl;
    cout << "|7) Frytki:       8zl                        |" << endl;
    cout << "|                                            |" << endl;
    cout << "|____________________________________________|" << endl;
}

void Menu::ukryjMenu()
{
    system("CLS");
}

Menu::~Menu()
{
    //dtor
}
