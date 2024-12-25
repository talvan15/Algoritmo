/*Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras, min e max, e
armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função ao main que use
essa função.*/
#include <iostream>
using namespace std;

int MaiorMenor(int *v, int n, int *min, int *max){
        *min = v[0];
        *max = v[0];

        for (int i = 1; i < n; i++)
        {
            if (v[i] < *min)
            {
                *min = v[i];
            }
            if (v[i] > *max)
            {
                *max = v[i];
            }   
            
        }  
}
int main()
{
    int min, max;
    int n = 4;
    int *vetor = new int[n];

    cout << "Digite os elementos do vetor: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    MaiorMenor(vetor, n, &min, &max);

    cout << "Maior valor: " << max << "\nMenor valor: " << min << endl;

    delete[] vetor;
    
}