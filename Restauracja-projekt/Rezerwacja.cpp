#include "Rezerwacja.h"
#include <iostream>

using namespace std;

Rezerwacja::Rezerwacja()
{
    //ctor
}

bool Rezerwacja::zarezerwuj(int numer)
{
    return czyZarezerwowany[numer] = true;
}

bool Rezerwacja::odrezerwuj(int numer)
{
    return czyZarezerwowany[numer] = false;
}

void Rezerwacja::wypiszCzyZarezerwowany(int numer)
{
    if(czyZarezerwowany[numer] == 0)
    {
        cout << "Niezarezerwowany";
    }
    else
    {
        cout << "Zarezerwowany";
    }
}

void Rezerwacja::wyswietlStoliki()
{
    for(int i = 0; i < 20; i++)
    {
        cout << numer_stolika[i] << " ";
        wypiszCzyZarezerwowany(i);
        cout << endl;
    }
}



Rezerwacja::~Rezerwacja()
{
    //dtor
}
