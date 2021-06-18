#include <iostream>

using namespace std;

int main()
{
    // validacion de tipos numéricos
    int edad = 0;

    // mientras la edad ingresada sea menor a 18 o mayor que 75 el ciclo
    // se sigue ejecutando, pidiendole al usuario nuevamente que ingrese una edad.
    // Cuando el usuario ingresa una edad que si cumple la validación se rompe el ciclo
    // y el programa sigue su flujo normal
    do
    {
        cout << "Ingresar la edad de la persona" << endl;
        cin >> edad;
    } while (edad < 18 || edad > 75);

    cout << "La edad de la persona es correcta " << endl;

    // Validación de valores char
    char tipoFactura;

    // se supone que en un ejercicio mencionan que los tipos
    // de factura aceptadas son 'V' - vencidas,'P' - 'Pagadas', 'C' - En Curso
    // hay que validar que mientras el usuario no ingrese un tipo correcto
    // se le siga solicituando
    do
    {
        cout << "Ingresar el tipo de Factura(V,P,C)" << endl;
        cin >> tipoFactura;
    } while (tipoFactura != 'V' && tipoFactura != 'P' && tipoFactura != 'C');

    cout << "El tipo de factura es correcta " << endl;

    system("pause");
    return 0;
}
