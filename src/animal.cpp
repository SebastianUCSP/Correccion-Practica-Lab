#include "animal.h"
#include <iostream>
using namespace std;

animal::animal()
{
    nombre = "Sin nombre";
    nrodepatas = 0;
}

/*
animal::animal(string n, int p)
{
    nombre=n;
    nrodepatas=p;
}
*/

void animal::habla()
{
    cout << "Nombre: " << nombre << ",  Nro de Patas: " << nrodepatas << endl;
}
