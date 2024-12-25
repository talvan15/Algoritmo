#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    int n = 1;
    const int tam = 100;
    int cont;

    for (int i = 1; i <= tam; i++)
    {
        a = pow(n, 2) * pow(2, n) + 549;
        b = 49 * n + 49;

        if (a < b)
        {
            cont = n;
            cout << cont << " ";
        }
        else{
            cout << "Nessa funcao, nao existe numeros em que: a < b: ";
            break;
        }

        n ++;
        
    }

}