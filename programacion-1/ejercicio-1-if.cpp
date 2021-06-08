#include <iostream>

using namespace std;

int main()
{

    float nota1 = 0, nota2 = 0, nota3 = 0;

    cout << "Ingrese las notas del estudiante: " << endl;

    // se obtienen los números que ingresó el usuario
    // el usuario puede ingresar los números separados por un espacio
    // o presionando Enter despues de cada número.
    cin >> nota1 >> nota2 >> nota3;

    // una vez que se tienen las notas se obtiene el promedio
    float promedio = 0.3f * nota1 + 0.3f * nota2 + 0.4f * nota3;

    // se imprime el promedio del estudiante
    cout << "El promedio del alumno es de " << promedio << "  ";

    //Dependiendo del resultado son la cantidad de cartias felices o le decimos que estudie
    if (promedio < 13)
        cout << "estudie" << endl;

    if (promedio >= 13 && promedio < 15)
    {
        cout << "Felicitaciones " << ":)  " << endl;
    }

    if (promedio >= 15 && promedio < 20)
    {
        cout << "Felicitaciones " << ":)  " << ":)  " << endl;
    }

    if (promedio == 20)
    {
        cout << "Felicitaciones " << char(1) << ":)  " << ":)  " << ":)  " << ":)  " << endl;
    }

    system("pause");
    return 0;
}
