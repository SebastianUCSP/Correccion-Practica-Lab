#ifndef PERRO_H
#define PERRO_H
#include "animal.h"
#include <iostream>
using namespace std;

class perro : public animal
{
    public:
        perro(string n, int p, string j);
        void habla(void);
        //void hacerhablar();

    protected:

    private:
        string juego;
};

#endif // PERRO_H
