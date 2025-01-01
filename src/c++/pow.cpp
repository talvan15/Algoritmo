#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(long long n, int &exponent) {
    if (n <= 0) {
        return false;
    }
    exponent = 0;
    while (n > 1) {
        if (n % 2 != 0) {
            return false;
        }
        n /= 2;
        exponent++;
    }
    return true;
}

int main()
{
    ifstream arquivo;
    arquivo.open("C:/AULAS/algoritmo/c++/entrada.txt");
    if (!arquivo)
    {
        cout << "Erro ao abrir arquivo!" << endl;
    }

    long long linha;
    int var = 0;
    while (arquivo >> linha)
    {
        if (isPowerOfTwo(linha, var))
        {
            cout << linha << " True! "  << var << endl;
        } else{
            cout << linha << " False! " << var << endl;
        }
        
        var = 0;
    }
    
    arquivo.close();

    return 0;
    
}