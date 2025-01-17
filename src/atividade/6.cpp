#include <iostream>
#include <limits>
using namespace std;

void maiorMenorIterativo(float vet[], int tamanho){
    float maior = 0, menor = numeric_limits<float>::max();
    
    for (int i = 0; i < tamanho; i++)
    {
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    cout << "Maior: " << maior << " Menor: " << menor << endl;
}
int main()
{
    int tamanho = 100;
    float vet[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        vet[i] = rand();
    }

    cout << "FORMA ITERATIVA ";
    maiorMenorIterativo(vet, tamanho);

    return 0;
}