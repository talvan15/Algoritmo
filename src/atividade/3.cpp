#include <iostream>
using namespace std; 

int somaValores(int (*matriz)[5]){
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += *(*(matriz + i) + j);
        }
        
    }
    
    return soma;
}
int main()
{
    int matriz[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25},
    };
    cout << somaValores(matriz) << endl;

}