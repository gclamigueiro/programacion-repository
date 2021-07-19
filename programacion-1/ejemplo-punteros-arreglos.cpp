#include <iostream>

using namespace std;

int main()
{
    int cantidadNotas;

    // se pide primero la cantidad de notas a almacenar
    cout << "Ingrese la cantidad de notas" << endl;
    cin >> cantidadNotas;

    // con esa cantidad se puede reservar el espacio en memoria
    int *notas = new int[cantidadNotas];

    // se le solicita al usuario que ingrese las notas
    for (int i = 0; i < cantidadNotas; i++)
    {
        int n;
        cout << "Nota " << i + 1 << endl;
        cin >> n;
        notas[i] = n;
    }

    // se imprime todas las notas para comprobar
    for (int i = 0; i < cantidadNotas; i++)
    {
        int n = notas[i];
        cout << n << " ";
    }
    cout<< endl;

    // una vez terminado de utilizar el arreglo es buena práctica liberar el espacio
    delete [] notas;

    system("pause");
    return 0;
}