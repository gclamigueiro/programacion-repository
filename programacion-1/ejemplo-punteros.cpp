#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    // para poder usar tildes en la consola
    setlocale(LC_CTYPE, "Spanish");

    int* punteroanumero;
    int valor = 5;

    punteroanumero = &valor;

    cout << "Imprimimos la dirección de memoria" << endl;
    cout << punteroanumero << endl;
    cout << "Imprimimos el valor almacenado en esa dirección" << endl;
    cout << *punteroanumero << endl;


    float *pointer = new float;
    *pointer = 5.6;
    cout << "Imprimimos la dirección de memoria" << endl;
    cout << pointer << endl;
    cout << "Imprimimos el valor almacenado en esa dirección" << endl;
    cout << *pointer << endl;

    system("pause");
    return 0;
}