#include <iostream>
using namespace std;

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd) {
    int* x3 = new int[(n1 < n2) ? n1 : n2];
    int tamanho = 0; 
    
    for (int i = 0; i < n1; i++) {
        bool encontradoEmX2 = false;
        
        for (int j = 0; j < n2; j++) {
            if (x1[i] == x2[j]) {
                encontradoEmX2 = true;
                break;
            }
        }
        
       
        if (encontradoEmX2) {
            bool jaExisteEmX3 = false;
            for (int k = 0; k < tamanho; k++) {
                if (x3[k] == x1[i]) {
                    jaExisteEmX3 = true;
                    break;
                }
            }
            
            
            if (!jaExisteEmX3) {
                x3[tamanho++] = x1[i];
            }
        }
    }

    
    *qtd = tamanho;

    
    int* resultado = new int[*qtd];
    for (int i = 0; i < *qtd; i++) {
        resultado[i] = x3[i];
    }

    delete[] x3; 
    return resultado;
}

int main() {
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5;
    int n2 = 5;
    int qtd;

    int* x3 = interseccao(x1, x2, n1, n2, &qtd);

    cout << "Vetor x3 (interseção de x1 e x2): ";
    for (int i = 0; i < qtd; i++) {
        cout << x3[i] << " ";
    }
    cout << endl;

    delete[] x3; 
    return 0;
}
