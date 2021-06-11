#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    // La condición de parada es mientras i < 5 se va a ejecutar lo que está entre llaves
    while (i < 5)
    {
        cout << "la variable i tiene un valor de: " << i << endl;
        // es necesario ir aumentando la i porque si no nunca se saldría del ciclo
        i++;
    }

    cout << "terminó la ejecución del ciclo while" << endl;

    system("pause");
    return 0;
}
