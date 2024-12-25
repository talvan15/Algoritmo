/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e
retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0
se existirem valores diferentes. Exibir os valores ordenados na tela.*/
#include <iostream>
using namespace std;

int OrdenaValor(int* a, int* b, int* c){

    if(*a > *b){
        int ctrl = *a;
        *a = *b;
        *b = ctrl;
    }
    if(*a > *c){
        int ctrl = *b;
        *b = *c;
        *c = ctrl;
    }
    if(*b > *c){
        int ctrl = *b;
        *b = *c;
        *c = ctrl;
    }

    if (*a == *b && *b == *c)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main()
{
    int a, b, c;

    cout << "digite os valores de a,b,c:" << endl;
    cin >> a >> b >> c;

    cout << "antes da ordenacao: \n" << a <<" "<< b <<" "<< c << endl;

    int valores = OrdenaValor(&a, &b, &c);

    cout << "Depois da ordenacao: \n" << a <<" "<< b <<" "<< c << endl;

    if (valores == 1)
    {
        cout << "Os valores sao iguais!" << endl;
    } else{
        cout << "Os valores sao diferentes! " << endl;
    }
    

}