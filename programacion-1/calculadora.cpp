#include <iostream>

using namespace std;

int main()
{

    //se declara las variables donde se almacenarán los números que ingrese el usuario
    int n1;
    int n2;

    // otra manera de declararlas es la siguiente
    //int n1, n2;

    cout << "Ingrese el número 1 y presione Enter" << endl;
    cin >> n1;

    cout << "Ingrese el número 2" << endl;
    cin >> n2;

    // suma
    int suma = n1 + n2;

    // resta
    int resta = n1 - n2;

    // multiplicación  
    int mult = n1 * n2;

    // división
    int div = n1 / n2;

    cout << "El resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicación es: " << mult << endl;
    cout << "El resultado de la división es: " << div << endl;
    cout << endl;

    system("pause");
    return 0;
}
