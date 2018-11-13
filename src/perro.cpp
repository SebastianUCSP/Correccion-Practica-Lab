#include "perro.h"
#include "animal.h"
#include <iostream>

using namespace std;

perro::perro(string n,int p, string j): animal(n,p)
{
    juego = j;
    cout << "Perro: " << endl;
    cout << "Nombre: " << n << ",  Nro de Patas: " << p <<  endl;
    cout << "Le gusta jugar " << j << endl;
    cout << "El perro dice: ";
    habla();
    cout << endl;
}

void perro::habla()
{
    cout << "guau guau" << endl;
}
