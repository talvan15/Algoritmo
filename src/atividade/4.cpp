#include <iostream>
#include <ctime>
using namespace std;

int bubleSort(int *vetor){
    //int aux = 0;
    int tam = 100;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
               /* aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = vetor[j];*/
                swap(vetor[j], vetor[j+1]);
            }
            
        }
        
    }

    cout << "vetor Ordenado" << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vetor[i] << " ";
    }
    
    cout << endl; 
}

int main()
{
    srand(time(0)); // inicializa numeros aleatórios para o rand()
    int tamanho = 100;
    int *vetor = new int[tamanho];

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 101;
    }

    bubleSort(vetor);


    delete[] vetor;
    return 0;   
}