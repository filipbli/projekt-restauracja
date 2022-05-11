#include "Zamowienia.h"
#include <iostream>

using namespace std;

Zamowienia::Zamowienia()
{
    //ctor
}

float Zamowienia::obliczCeneZam()
{
    cena_zamowienia = cena_produktu[nr_zamowienia-1] * ilosc_zamowienia;
    return cena_zamowienia;
}

void Zamowienia::zamow()
{
    cout << "-------ZAMOW-------" << endl;
    cout << "Wybierz numer: ";
    cin >> nr_zamowienia;
    cout << "Podaj ilosc: ";
    cin >> ilosc_zamowienia;
    cout << "Cena zamowienia wynosi: " << obliczCeneZam() << endl;
}

Zamowienia::~Zamowienia()
{
    //dtor
}
