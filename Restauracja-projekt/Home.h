#ifndef HOME_H
#define HOME_H
#include "Menu.h"
#include "Zamowienia.h"

class Home :public Menu, public Zamowienia
{
    public:
        Home();
        virtual ~Home();
        void wyswietlHome();
        void powrot();
        int a;

        void wyswietlMenu();

        void zamow();
        int nr_zamowienia;
        int ilosc_zamowienia;
    protected:

    private:
};

#endif // HOME_H
