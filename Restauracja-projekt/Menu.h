#ifndef MENU_H
#define MENU_H

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        void wyswietlMenu();
        void ukryjMenu();
        void zamow();

        int nr_zamowienia;
        int ilosc_zamowienia;
    protected:

    private:
};

#endif // MENU_H
