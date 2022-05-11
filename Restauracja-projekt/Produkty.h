#ifndef PRODUKTY_H
#define PRODUKTY_H
#include <string>

using namespace std;

class Produkty
{
    public:
        Produkty();
        virtual ~Produkty();
        void wyswietlNr(int a);
        void wyswietlNazwe(int a);
        void wyswietlCene(int a);
        float zmienCene(int a, float b);

        int nr_produktu[100] = { 0, 1, 2, 3, 4, 5, 6 };
        string nazwa_produktu[100] = { "Hamburger", "Hot-dog", "Pizza", "Kebab", "Coca-cola", "Fanta", "Frytki" };
        float cena_produktu[100] = { 12, 10, 20, 15, 6, 5, 8 };

    protected:

    private:
};

#endif // PRODUKTY_H
