/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de
ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Elementos do array: " << endl;

    int* ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Elementos do array *2 " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << (ptr[i]) * 2 << " " ;
    }
    
    
}