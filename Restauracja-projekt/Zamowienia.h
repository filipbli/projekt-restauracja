#ifndef ZAMOWIENIA_H
#define ZAMOWIENIA_H
#include "Produkty.h"

class Zamowienia :public Produkty
{
    public:
        Zamowienia();
        virtual ~Zamowienia();
        void zamow();
        float obliczCeneZam();

        int nr_zamowienia;
        int ilosc_zamowienia;
        float cena_zamowienia;

        int nr_produktu[100] = { 0, 1, 2, 3, 4, 5, 6 };
        string nazwa_produktu[100] = { "Hamburger", "Hot-dog", "Pizza", "Kebab", "Coca-cola", "Fanta", "Frytki" };
        float cena_produktu[100] = { 12, 10, 20, 15, 6, 5, 8 };
    protected:

    private:
};

#endif // ZAMOWIENIA_H
