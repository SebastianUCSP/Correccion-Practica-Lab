#ifndef LORO_H
#define LORO_H
#include "animal.h"
#include <iostream>
using namespace std;

class loro : public animal
{
    public:
        loro(string n, int p, string pa);
        void habla(void);
        //void hacerhablar();

    protected:

    private:
        string palabras;
};

#endif // LORO_H
