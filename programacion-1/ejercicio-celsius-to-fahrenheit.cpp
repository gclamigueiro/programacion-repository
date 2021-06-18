#include <iostream>

using namespace std;

int main()
{
    // variable donde se guardara el valor ingresado por el usuario
// se define float para que pueda poner números con decimales
    float celcius = 0;

    // Se le pide al usuario que ingrese el valor
    cout << "Ingresar los grados celsius:" << endl;
    cin >> celcius;

    // con el valor en grados celsius se hace el cálculo usando la fórmula 
    float fahrenheit = (9 * celcius) / 5 + 32;

    cout << "El valor en Fahrenheit es: " << fahrenheit << endl;

    system("pause");
    return 0;
}