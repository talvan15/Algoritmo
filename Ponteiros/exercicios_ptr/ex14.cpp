#include <iostream>
using namespace std;

int preencher(int* vet, int tam){
    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
    }
    
}
int main()
{
    int tam = 4;
    int* vet = new int[tam];

    preencher(vet, tam);

    cout << "Vetor lido: " << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vet[i] << " ";
    }
    
}