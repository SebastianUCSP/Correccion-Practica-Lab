#include "loro.h"
#include "animal.h"
#include <iostream>

using namespace std;

loro::loro(string n,int p, string pa):animal(n,p)
{
    palabras = pa;
    cout << "Loro: " << endl;
    cout << "Nombre: " << n << ",  Nro de Patas: " << p <<  endl;
    cout << "Sabe decir: " << pa << endl;
    cout << "El loro dice: ";
    habla();
    cout << endl;
}

void loro::habla()
{
    cout << "pi pi" << endl;
}
