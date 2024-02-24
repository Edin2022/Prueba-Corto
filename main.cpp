#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int nacimiento, actual;
    time_t ahora = time(0);
    tm* local = localtime(&ahora);
    actual = 1900 + local->tm_year;
    cout << "Ingrese su año de nacimiento: ";
    cin >> nacimiento;
    if (nacimiento > 1900 && nacimiento < actual)
        cout << "año de nacimiento valido " << endl;
    else
        cout << "año de nacimiento invalido " << endl;

    const int cantidadNumeros = 5; // Definimos que se ingresarán 5 números

    // Ejercicio 2
    double suma = 0.0;
    int contador = 0;

    // Solicitar al usuario que ingrese los 5 números
    while (contador < cantidadNumeros) {
        double numero;
        cout << "Ingrese el numero " << contador + 1 << ": ";
        cin >> numero;
        suma += numero; // Sumar el número ingresado a la suma total
        contador++; // Incrementar el contador
    }

    // Calcular la media dividiendo la suma total entre la cantidad de números
    double media = suma / cantidadNumeros;

    // Mostrar la media calculada
    cout << "La media de los numeros ingresados es: " << media << endl;

    // Ejercicio 3
    int n = 10;
    int fibonacci[n] = {0, 1}; //


    for (int i = 2; i < n; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }


    cout << "Los primeros 10 numeros de la serie de Fibonacci son: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci[i] << " ";
    }
    cout << endl;

    return 0;
}
