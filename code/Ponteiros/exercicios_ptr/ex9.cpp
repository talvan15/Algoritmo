/*Escreva uma função que dado um número real passado como parâmetro, retorne à parte inteira e a parte
fracionaria deste número. Escreva um programa que chama a função Prototipo: void frac(float num, int*
inteiro, float* frac);*/
#include <iostream>
#include <cmath>
using namespace std;

void frac(float num, int* inteiro, float* frac){
    *inteiro = static_cast<int>(num);
    *frac = num - *inteiro;
}
int main()
{
    float numero;
    int inteiro;
    float partefrac;

    cout << "Digite um numero fracionado: " << endl;
    cin >> numero;

    frac(numero, &inteiro, &partefrac);

    cout <<"Numero: " << numero << "\nParte inteira: " << inteiro << "\nParte fracionada: " << partefrac << endl;
    
}