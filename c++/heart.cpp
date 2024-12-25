#include <iostream>
using namespace std;

int main() {
    int n = 6; 
    cout << endl;
    cout << " ANA MARIA  " << endl;
    
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Parte inferior do coração
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    cout << endl;
    return 0;
}
