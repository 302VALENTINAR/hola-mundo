#include <iostream>
using namespace std;

int main() {
    int n, i;
    float num, maximo, minimo, suma;

    // Leer cantidad de datos
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    // Leer primer número
    cout << "Ingrese un numero: ";
    cin >> num;

    maximo = num;
    minimo = num;

    // Ciclo para los demás números
    for(i = 2; i <= n; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num > maximo) {
            maximo = num;
        }

        if(num < minimo) {
            minimo = num;
        }
    }

    // Calcular suma
    suma = maximo + minimo;

    // Mostrar resultados
    cout << "El valor maximo es: " << maximo << endl;
    cout << "El valor minimo es: " << minimo << endl;
    cout << "La suma es: " << suma << endl;

    return 0;
}
