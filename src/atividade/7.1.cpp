#include <iostream>
#include <algorithm>
using namespace std;

bool buscaBinariaRecursiva(int vetor[], int inicio, int fim, int chave) {
    if (inicio > fim)
        return false;

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == chave)
        return true;
    else if (vetor[meio] < chave)
        return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
    else
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave);
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

    if (buscaBinariaRecursiva(vetor, 0, tamanho - 1, chave))
        cout << "Elemento encontrado!" << endl;
    else
        cout << "Elemento não encontrado!" << endl;

    return 0;
}
