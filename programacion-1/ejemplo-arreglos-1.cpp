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
    int nota1, nota2, nota3, nota4, nota5;

    // Utilizamos la función definida en la clase pasada para validar que sea un número mayor o igual a cero
    /*nota1 = ObtenerNota(1);
    nota2 = ObtenerNota(2);
    nota3 = ObtenerNota(3);
    nota4 = ObtenerNota(4);
    nota5 = ObtenerNota(5);
    */

    int notas[5];
    // se puede cambiar un valor de un arreglo especificando la posición entre los corchetes y asignándole un nuevo valor
    notas[0] = 18;
    notas[1] = 20;
    notas[2] = 19;
    notas[3] = 12;
    notas[4] = 15;

    // se puede acceder a una posición del arreglo especificando el índice entre los corchetes
    nota1 = notas[0];
    nota2 = notas[1];
    nota3 = notas[2];
    nota4 = notas[3];
    nota5 = notas[4];

    int promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    // se imprime el resultado
    cout << "El promedio de las notas es: " << promedio << endl;

    system("pause");
    return 0;
}