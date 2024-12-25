/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/

#include <iostream>
using namespace std;

int main()
{
    int inteiro = 10;
    double real = 5.0;
    char caractere = 'A';

    cout << "Antes da modificacao: " << endl;

    cout << inteiro << endl;
    cout << real << endl;
    cout << caractere << endl;

    int *ptr1;
    double *ptr2;
    char *ptr3;

    ptr1 = &inteiro;
    ptr2 = &real;
    ptr3 = &caractere;

    *ptr1 = 5;
    *ptr2 = 5/2;
    *ptr3 = 'B';

    cout << "Depois da modificação: " << endl;
    cout << inteiro << endl << *ptr2 << endl << *ptr3 << endl;

}