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

// la funcion recibe el valor N que representa que término de fibonnacci se desea
// por ejemplo si se le pasa N = 4 debe retornar 3
int fibonacci(int N)
{
    // se ponen los casos bases de que si la N es igual 0 devuelva 0
    if (N == 0)
        return 0;
    // si la N es igual 1 devuelva 1
    if (N == 1)
        return 1;

    // empezamos con los valores de n1 y n2
    int n1 = 0;
    int n2 = 1;
    int ni = 0;
    // se itera desde i = 1 hasta i < N
    // se va caculando el Ni y se van actualizando los valores
    // de n1 y n2
    for (int i = 1; i < N; i++)
    {
        ni = n1 + n2;
        n1 = n2;
        n2 = ni;
    }
    // cuando se sale del ciclo en n2 se tendrá el valor del término N
    // en la suceción de Fibonacci
    return ni;
}

int main()
{
    int N;
    // Utilizamos la función definida en la clase pasada para validar que sea un número mayor o igual a cero
    N = ObtenerNumero();
    // se llama a la función pasandole N
    int resultado_factorial = fibonacci(N);

    // se imprime el resultado
    cout << "El valor " << N << " de la sucesión de fibonacci es " << resultado_factorial << endl;

    system("pause");
    return 0;
}