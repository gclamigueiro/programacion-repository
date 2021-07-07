#include <iostream>
using namespace std;

// la función ObtenerNota le pide al usuario un número,valida que sea
// mayor a cero y menor o igual que 20 y devuelve el número ingresado
int ObtenerNota(int indiceNota)
{
    int numero;
    do
    {
        cout << "Ingrese la nota: " << indiceNota << endl;
        cin >> numero;
    } while (numero <= 0 || numero > 20);

    return numero;
}

int main()
{   
    // se declara una constante que especifica la cantidad de notas
    const int cantidadNotas = 5;

    // se declara un arreglo de tamaño cantidadNotas
    int notas[cantidadNotas];

    // se recorre desde 0 hasta cantidadNotas - 1 y se le solicita al usuario
    // que ingrese un valor, ese valor se guarda en la posición i del arreglo
    // o sea se guardarán desde la posición 0 a la 4
    for (int i = 0; i < cantidadNotas; i++)
    {
        notas[i] = ObtenerNota(i + 1);
    }

    int suma = 0;

    // una vez que se tengan todos los valores en el arreglo
    // se usa un for para recorrerlo e ir sumando en la variable suma    
    for (int i = 0; i < cantidadNotas; i++)
    {
       suma = suma + notas[i];
    }
    // se calcula el promedio
    int promedio = suma / cantidadNotas;

    // se imprime el resultado
    cout << "El promedio de las notas es: " << promedio << endl;

    system("pause");
    return 0;
}