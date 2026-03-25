#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num, resultado;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (num >= 0) {
        resultado = sqrt(num);
        cout << "La raiz cuadrada es: " << resultado;
    } else {
        cout << "Error: el numero debe ser positivo";
    }

    return 0;
}
