/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e
imprima o endereço das posições contendo valores pares.*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    
    cout << "Elementos do arr: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Endereco dos numeros pares do arr: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ": " << &arr[i] << endl;
        }
        
    }
    
    
}