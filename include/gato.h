#ifndef GATO_H
#define GATO_H
#include "animal.h"
#include <iostream>
using namespace std;

class gato : public animal
{
    public:
        gato(string n ,int p, string g);

        void habla(void);
        //void hacerhablar();

    private:
        string comida_gato;
};

#endif // GATO_H
