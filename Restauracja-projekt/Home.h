#ifndef HOME_H
#define HOME_H
#include "Menu.h"

class Home:public Menu
{
    public:
        Home();
        virtual ~Home();
        void wyswietlHome();
        void wyswietlMenu();
        void powrot();
        int a;
    protected:

    private:
};

#endif // HOME_H
