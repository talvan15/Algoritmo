/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada
posição desse array.*/
#include <iostream>

using namespace std;

int main()
{
    float array[10] = {1,2,3,4,5,6,7,8,9,10};
    float* ptr = array;

    for(int i = 0; i < 10; i++){
        cout << "Endereco do elemento " << i + 1 << ": " << &array[i] << endl;
    }
}