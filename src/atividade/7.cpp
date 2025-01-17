#include <iostream>
#include <algorithm>
using namespace std;

bool buscaBinariaIterativa(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave)
            return true;
        else if (vetor[meio] < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return false;
}

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];
    cout << "Digite os elementos do vetor:\n";
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    sort(vetor, vetor + tamanho);

    int chave;
    cout << "Digite o número a ser buscado: ";
    cin >> chave;

    if (buscaBinariaIterativa(vetor, tamanho, chave))
        cout << "Elemento encontrado!" << endl;
    else
        cout << "Elemento não encontrado!" << endl;

    return 0;
}
