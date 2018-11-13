#include <iostream>
#include "animal.h"
#include "perro.h"
#include "loro.h"
#include "gato.h"
#include "animalarray.h"

using namespace std;

int main()
{
    perro p("Rex", 4, "A la pelota");
    //a.habla();

    gato g("Michi", 4, "Ratones");
    //g.habla();

    loro l("Piolin", 2, "Hola mundo");
    //l.habla();

    perro p2("Bronco", 4, "Las escondidas");

    cout << "Arreglo Animales:" << endl;

    animal arr[]={p,g,l};
    int size =sizeof(arr)/sizeof(arr[0]);

    animalarray Array(arr, size);

    cout << endl;
    cout << "Arreglo original: " << endl;

    Array.print();

    animalarray Copia = Array;

    cout << endl;
    cout << "Copia: " << endl;

    Copia.print();

    cout << endl;
    cout << "Insertar: " << endl;

    Array.insert(2, p2);

    Array.print();

    cout << endl;
    cout << "Remover: " << endl;

    Array.remove(3);

    Array.print();







    return 0;
}
