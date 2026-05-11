#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Leer los dos números
    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Comparar los números
    if (a > b)
        cout << "El numero mayor es: " << a << endl;
    else if (b > a)
        cout << "El numero mayor es: " << b << endl;
    else
        cout << "Los dos numeros son iguales" << endl;

    return 0;
}
