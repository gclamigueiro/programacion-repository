#include <iostream>

using namespace std;

int main()
{
    // primero se define el iterador (la variable i)
    // segundo la condición de parada
    // por último como va a incrementar el iterador
    // dentro de las llaves el código que se va a repetir
    for (int i = 0; i < 5; i++)
    {
        cout << "la variable i tiene un valor de: " << i << endl;
    }
    cout << "terminó la ejecución del ciclo for" << endl;

    system("pause");
    return 0;
}
