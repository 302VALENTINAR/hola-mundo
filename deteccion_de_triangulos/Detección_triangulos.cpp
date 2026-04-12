#include <iostream>
using namespace std;

int main() {
    int n;
    float a, b, c;
    int contador = 0;

    cout << "Ingrese la cantidad de ternas: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los valores a, b, c: ";
        cin >> a >> b >> c;

        float mayor, x, y;

        // Determinar el mayor
        if (a > b && a > c) {
            mayor = a;
            x = b;
            y = c;
        } else if (b > a && b > c) {
            mayor = b;
            x = a;
            y = c;
        } else {
            mayor = c;
            x = a;
            y = b;
        }

        // Verificar teorema de Pitágoras
        if ((x * x + y * y) == (mayor * mayor)) {
            contador++;
        }
    }

    cout << "Cantidad de triangulos rectangulos: " << contador << endl;

    return 0;
}
