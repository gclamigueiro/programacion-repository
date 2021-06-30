#include <iostream>
using namespace std;

// la función ObtenerNumero le pide al usuario un número,valida que sea
// mayor o igual a cero y devuelve el número ingresado
int ObtenerNumero()
{
    int numero;
    do
    {
        cout << "Ingrese un valor mayor a 0:" << endl;
        cin >> numero;
    } while (numero < 0);

    return numero;
}

int factorial(int N)
{

    // ponemos el caso de que si la N es igual cero nos devuelva 1 la función
    if (N == 0)
        return 1;

    int resultado = 1;

    for (int i = 1; i <= N; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}

int main()
{
    int N;
    // Utilizamos la función definida en la clase pasada para validar que sea un número mayor o igual a cero
    N = ObtenerNumero();
    // se llama a la función pasandole N
    int resultado_factorial = factorial(N);
    
    // se imprime el resultado
    cout << "El factorial de " << N << " es " << resultado_factorial << endl;

    system("pause");
    return 0;
}