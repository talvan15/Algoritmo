/*Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne
quantos números negativos há nesse array. Essa função deve obedecer ao protótipo: int negativos(float *vet,
int N);*/
#include <iostream>
using namespace std;

int negativos(float *vet, int n){
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            contador++;
        }
    }
    return contador;
    
}

int main()
{
    int n;
    cout << "Digite o tamanho do array: ";
    cin >> n;

    float *vet = new float[n];
    cout << "Valores do vetor: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    
    int total = negativos(vet, n);
    cout << "Total de numeros negativos no vetor: " << total << endl;

    delete[] vet;

}