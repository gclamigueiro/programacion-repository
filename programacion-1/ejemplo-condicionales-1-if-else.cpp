#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese el número a comparar: " << endl;
    cin >> numero;

    // con el if vemos si una condición se cumple, si la condición es true(verdadera)
    // se ejecuta el código contenido dentro del if
    if (numero > 10) {
        cout << "El número ingresado es mayor que 10" << endl;
    }
    else // el código que se encuentra dentro de las llaves del else se  ejecuta si la 
         // condición del if no se cumple
    {
        cout << "El número ingresado es menor que 10" << endl;
    }

    system("pause");
    return 0;
}
