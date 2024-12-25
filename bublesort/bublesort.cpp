#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

int main()
{
    auto inicio = std::chrono::high_resolution_clock::now();
    int aux = 0;
    bool cont = false;
    int arr [100];
    int tam = 100;

    int seed = time(0);
    srand(seed);

    cout << "Vetor ordenado " << endl;
    for (int i = 0; i < tam; i++)
    {
        arr[i] = 1 + rand() %100;
        cout << arr[i] << " | ";
    }
    
    cout << endl;
    cout << "Vetor ordenado " << endl;
    for (int j = 0; j < tam ; j++)
    {
        for (int i = 0; i < tam - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                cont = true;
            }
            
        }
        if (cont == false){
            cout << "vetor ja esta ordenado! " << endl;
            break;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        cout << arr[i] << " | ";
    }
    
    auto resultado = std::chrono::high_resolution_clock::now() - inicio;
    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(resultado).count();

    cout << "\nTempo de execucao do algoritmo: " << microseconds << " Microsegundos" << endl;
}