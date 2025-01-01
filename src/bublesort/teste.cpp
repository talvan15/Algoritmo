#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;

int main()
{
    auto inicio = std::chrono::high_resolution_clock::now();

    int arr[] = {1,2,3,4,5,6,7,8,9,0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10, 11, 12};
    int tam = sizeof(arr)/sizeof(arr[0]);
    cout << "tamanho: " << tam << endl;

    for (int i = 0; i < tam; i++)
    {
        cout << arr[i] << " | ";
    }

    cout << endl;

    auto fim = std::chrono::high_resolution_clock::now();

    auto duaracao = std::chrono::duration_cast<std::chrono::milliseconds>(fim-inicio);

    cout << "tempo de execucao do algoritmo: " << duaracao.count() << " milisegundos";
    
}