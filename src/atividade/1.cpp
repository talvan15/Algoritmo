#include <iostream>
#include <vector>
using namespace std;

int medias(vector<int>& vetor){
    int tam = vetor.size();
    float soma = 0, cont = 0;
    float media;
    for (int i = 0; i < tam; i++)
    {
        soma += vetor[i];
        cont ++;
    }

    media = soma/cont;  

    return media;
}

int main()
{
    vector<int> notas = {1,2,3,4,5,6,7,8,9,10};
    int tam = notas.size();

    cout << "Notas: " << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << notas[i] << " ";
    }
    cout << endl;

    cout << "Media: " << medias(notas);
    
}