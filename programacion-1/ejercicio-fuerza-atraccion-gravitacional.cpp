#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Se declaran las variables a utilizar
    float M1, M2, R;

    // le pedimos al usuario que ingrese los valores
    do
    {
        cout << "Ingrese el valor de M1:" << endl;
        cin >> M1;
        cout << endl;
    } while (M1 <= 0);

    do
    {
        cout << "Ingrese el valor de M2:" << endl;
        cin >> M2;
        cout << endl;
    } while (M2 <= 0);

    do
    {
        cout << "Ingrese el valor de R:" << endl;
        cin >> R;
        cout << endl;
    } while (R <= 0);

    const float G = 6.67 * pow(10, -11);

    // con los datos ingresados por el usuario y la constante
    // de gravitación universal se calcula la Fuerza
    float F = G * ((M1 * M2) / pow(R, 2));

    // por último se le muestra el resultado al usuario
    cout << "El valor de la fuerza es: " << F << endl;
    system("pause");
    return 0;
}