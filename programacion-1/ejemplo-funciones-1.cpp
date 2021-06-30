#include <iostream>
#include <math.h>

using namespace std;

// la función ObtenerNumero le pide al usuario un número,valida que sea
// mayor a cero y devuelve el número ingresado

// int es el tipo de datos que va a devolver la función,
// ObtenerNumero es el nombre que identifica la función para poder llamarla desde otra parte del código
int ObtenerNumero()
// entre llaves se pone el cuerpo, o sea las líneas de código 
// necesarias para que la función cumpla su objetivo, en este ejemplo es 
// pedir un número al usuario y validar que sea mayor que cero
{
    int numero;
    do
    {
        cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> numero;
    } while (numero <= 0);
    // El return nos dice que valor va a devolver la función, en este ejemplo
    // devuelve el número ingresado por el usuario
    // El tipo del valor que se devuelva tiene que coincidir con el 
    // declarado en el encabezado de la función
    // En este caso se retorna un int y en el encabezado se definió que la función devuelve un int
    // Una vez que se ejecuté un return se sale de la función
   return numero; 
}

// función que retorna un float que representa el área de un círculo
// recibe por parámetros el radio del circulo
float AreaCircunferencia(float radio)
{
    const float PI = 3.14;
    return PI * pow(radio, 2);
}

// ejemplo de función con dos parámetros
float AreaRectangulo(float base, float altura)
{
    return base * altura;
}

// función que recibe un char como parámetro e imprime el texto correspondiente a ese estado
// al ser de tipo void, es una función que no devuelve ningún valor
void ImprimirEstado(char estado)
{
    if (estado == 'F')
        cout << "El estado es Facturado" << endl;
    else if (estado == 'V')
        cout << "El estado es Vencido" << endl;
    else
        cout << "El estado es Otro" << endl;
}

int main()
{
    // Se declaran las variables a utilizar
    int n1, n2, n3, n4, n5;

    /*
    // de esta forma  le pedimos al usuario que ingrese los valores
    // sería un total de 5 líneas por cada variable, un total de 25
    // usando la función se reduce considerablemente
    do
    {
        cout << "Ingrese el valor 1:" << endl;
        cin >> n1;
    } while (n1 <= 0);

    // número 2
    ...
    // número 3
    ...
    // número 4
    ...
    // número 5
    ...
    */

    // para utilizar la funcion solo es necesario llamarla por su nombre,
    n1 = ObtenerNumero();
    n2 = ObtenerNumero();
    n3 = ObtenerNumero();
    n4 = ObtenerNumero();
    n5 = ObtenerNumero();

    // aqui se podría hacer alguna operación con las variables,
    // ...

    // ejemplo de como llamar una función
    // en este caso el resultado de la función se guarda en una variable
    // para poder utilizarlo posteriormente
    float areaC1 = AreaCircunferencia(25);
    float areaC2 = AreaCircunferencia(18.5);
    float areaC3 = AreaCircunferencia(10);

    float areaR1 = AreaRectangulo(20, 2);
    float areaR2 = AreaRectangulo(12.6, 3.1);

    // Llamando a la función de tipo void, en este caso como no devuelve nada no se asigna a una variable
    ImprimirEstado('F');
    ImprimirEstado('V');
    ImprimirEstado('X');

    system("pause");
    return 0;
}