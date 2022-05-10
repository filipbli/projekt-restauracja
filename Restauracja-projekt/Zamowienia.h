#ifndef ZAMOWIENIA_H
#define ZAMOWIENIA_H


class Zamowienia
{
    public:
        Zamowienia();
        virtual ~Zamowienia();
        void zamow();

        int nr_zamowienia;
        int ilosc_zamowienia;
    protected:

    private:
};

#endif // ZAMOWIENIA_H
