/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule e
exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve
ser usada para calcular o dobro, C o triplo e D o quádruplo.*/
#include <iostream>
using namespace std;

int main()
{
    int a, *b, **c, ***d;
    
    cout << "Digite A: " << endl;
    cin >> a;

    b = &a;
    c = &b;
    d = &c;

    cout << (*b)*2 <<" "<< (**c) * 3 <<" "<< (***d) * 4 << endl;

}