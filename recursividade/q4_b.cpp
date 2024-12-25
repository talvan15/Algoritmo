#include <iostream>
using namespace std;

int fatorRec(int n){
    if (n <= 1) return 1;
    else return n * fatorRec(n - 1);
}

int fatorIter(int n){
    int fator = 1;
    for (int i = 2; i <= n; i++)
    {
      fator *= i;
    }
    
    return fator;
}

int main()
{
    int n = 5;
    cout << "Fatorial recursivo " << endl;
    cout << fatorRec(n) << endl;

    cout << "Fatorial iterativo " << endl;
    cout << fatorIter(n) << endl;
}