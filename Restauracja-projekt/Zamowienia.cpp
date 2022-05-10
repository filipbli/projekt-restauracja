#include "Zamowienia.h"
#include <iostream>

using namespace std;

Zamowienia::Zamowienia()
{
    //ctor
}

void Zamowienia::zamow()
{
    cout << "-------ZAMOW-------" << endl;
    cout << "Wybierz numer: " << endl;
    cin >> nr_zamowienia;
    cout << "Podaj ilosc: " << endl;
    cin >> ilosc_zamowienia;
}

Zamowienia::~Zamowienia()
{
    //dtor
}
