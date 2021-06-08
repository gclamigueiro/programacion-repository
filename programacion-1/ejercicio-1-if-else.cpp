#include <iostream>

using namespace std;

int main()
{
    float nota1 = 0, nota2 = 0, nota3 = 0;

    cout << "Ingrese las notas del estudiante: " << endl;

    // se obtienen los números que ingresó el usuario.
    // el usuario puede ingresar los números separados por un espacio
    // o presionando Enter despues de cada número.
    cin >> nota1 >> nota2 >> nota3;

    // una vez que se tienen las notas se obtiene el promedio
    float promedio = 0.3f * nota1 + 0.3f * nota2 + 0.4f * nota3;

    // se imprime el promedio del estudiante
    cout << "El promedio del alumno es de " << promedio << "  ";

    // En este caso se evalúa primero si es menor que 13
    // si no es asi, evaluará si es mayor que 13 y menor que 15
    // si no, de 15 a 19
    // y por último si no se cumple ninguna de las otras condiciones
    // ejecuta el último código que es cuando es igual a 20
    if (promedio < 13)
        cout << "estudie" << endl;
    else
    if (promedio >= 13 && promedio < 15)
    {
        cout << "Felicitaciones " << ":)  " << endl;
    }
    else
    if (promedio >= 15 && promedio < 20)
    {
        cout << "Felicitaciones " << ":)  " << ":)  " << endl;
    }
    else // cuando el contenido del if o else es de una sola linea no es obligatorio las llaves
        cout << "Felicitaciones " << ":)  " << ":)  " << ":)  " << ":)  " << ":)  " << endl;

    system("pause");
    return 0;
}


