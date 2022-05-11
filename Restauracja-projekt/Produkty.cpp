#include "Produkty.h"
#include <iostream>

using namespace std;

Produkty::Produkty()
{
    //ctor
}

void Produkty::wyswietlNr(int a)
{
    cout << nr_produktu[a] << endl;
}

void Produkty::wyswietlNazwe(int a)
{
    cout << nazwa_produktu[a] << endl;
}

void Produkty::wyswietlCene(int a)
{
    cout << cena_produktu[a] << endl;
}

float Produkty::zmienCene(int a, float b)
{
    return cena_produktu[a] = b;
}

Produkty::~Produkty()
{
    //dtor
}
