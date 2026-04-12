#include <iostream>
#include <cmath> // para sqrt
using namespace std;

int main() {
    int N;
    float dato, suma = 0, promedio, sumaCuadrados = 0, desviacion;

    cout << "Ingrese la cantidad de datos: ";
    cin >> N;

    // Primer ciclo: calcular suma
    for(int i = 1; i <= N; i++) {
        cout << "Ingrese dato " << i << ": ";
        cin >> dato;
        suma += dato;
    }

    promedio = suma / N;

    // Segundo ciclo: calcular suma de cuadrados
    for(int i = 1; i <= N; i++) {
        cout << "Ingrese dato " << i << " nuevamente: ";
        cin >> dato;
        sumaCuadrados += pow(dato - promedio, 2);
    }

    desviacion = sqrt(sumaCuadrados / N);

    cout << "La desviacion tipica es: " << desviacion << endl;

    return 0;
}
