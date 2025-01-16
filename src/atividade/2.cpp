#include <iostream>
#include <stdlib.h>
using namespace std;

int maiorValor(int *vetor, int tamanho){
    int maior = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }

    }
    
    return maior;
}
int main()
{
    const int tamanho = 20;
    int *vetor = new int [tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand();
        cout << vetor[i] << " ";
    }
    
    cout << "Maior valor: " << maiorValor(vetor, tamanho) << endl;

    delete[] vetor;
    
}