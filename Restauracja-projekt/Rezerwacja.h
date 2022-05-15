#ifndef REZERWACJA_H
#define REZERWACJA_H


class Rezerwacja
{
    public:
        Rezerwacja();
        virtual ~Rezerwacja();
        int numer_stolika[20] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        bool czyZarezerwowany[20];

        bool zarezerwuj(int numer);
        bool odrezerwuj(int numer);
        void wypiszCzyZarezerwowany(int numer);
        void wyswietlStoliki();
    protected:

    private:
};

#endif // REZERWACJA_H
