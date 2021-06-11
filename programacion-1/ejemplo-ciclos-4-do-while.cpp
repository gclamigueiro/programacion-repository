#include <iostream>

using namespace std;

int main()
{
    int numero = 0;

    do
    {
        cout << "Ingresar un número entre 10 y 20:" << endl;
        cin >> numero;
    } while (numero < 10 || numero > 20);

    cout << "El número ingresado por el usuario es: " << numero << endl;

    system("pause");
    return 0;
}
