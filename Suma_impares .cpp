#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    cout << "Ingrese un numero positivo: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            suma += i;
        }
    }

    cout << "La suma de los numeros impares es: " << suma << endl;

    return 0;
}