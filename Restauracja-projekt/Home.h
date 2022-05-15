#ifndef HOME_H
#define HOME_H
#include "Menu.h"
#include "Zamowienia.h"
#include "Rezerwacja.h"

class Home :public Menu, public Zamowienia, public Rezerwacja
{
    public:
        Home();
        virtual ~Home();
        void wyswietlHome();
        void powrot();
        int a;
        int b;
        int numerRezerwacja;

        // KLASA MENU
        void wyswietlMenu();

        // KLASA ZAMOWIENIA
        void zamow();
        int nr_zamowienia;
        int ilosc_zamowienia;

        // KLASA REZERWACJA
        bool zarezerwuj(int numer);
        bool odrezerwuj(int numer);
        void wypiszCzyZarezerwowany(int numer);
        void wyswietlStoliki();

    protected:

    private:
};

#endif // HOME_H
