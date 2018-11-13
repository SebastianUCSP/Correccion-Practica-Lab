#include "gato.h"
#include "animal.h"
#include <iostream>

using namespace std;

gato::gato(string n,int p, string g):animal(n, p)
{
    comida_gato = g;
    cout << "Gato: " << endl;
    cout << "Nombre: " << n << ",  Nro de Patas: " << p <<  endl;
    cout << "Me gusta comer " << g << endl;
    cout << "El gato dice: ";
    habla();
    cout << endl;
}


void gato::habla()
{
    cout << "miau miau" << endl;
}
