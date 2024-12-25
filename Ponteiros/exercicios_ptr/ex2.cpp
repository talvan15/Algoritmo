/*Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B.
A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função
não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e
B na função ao principal.*/
#include <iostream> 
using namespace std;

void soma(int* a, int* b){
    (*a) = (*a + *b);
}
int main()
{
    int A, B;
    cout << "Valores de A e B: " << endl;
    cin >> A >> B;
    soma(&A, &B);

    cout << "Soma dos numeros: "<< A << endl;
}