#include <iostream>
using namespace std;

// Função recursiva para calcular a^n usando divisão e conquista
double potencia(double a, int n) {

    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        double metade = potencia(a, n / 2); 
        return metade * metade;
    } 

    else {
        return a * potencia(a, n - 1);
    }
}

int main() {
    double base;
    int expoente;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente (>= 0): ";
    cin >> expoente;

    double resultado = potencia(base, expoente);
    cout << base << "^" << expoente << " = " << resultado << endl;

    return 0;
}
