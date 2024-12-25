#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Definindo o estado objetivo
const vector<vector<int>> OBJETIVO = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 0}
};

// Função para encontrar a posição do espaço vazio (0)
pair<int, int> encontrarVazio(const vector<vector<int>>& estado) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (estado[i][j] == 0) return {i, j};
        }
    }
    return {-1, -1}; // Caso não encontre, apenas por segurança
}

// Função para verificar se o estado é o objetivo
bool eObjetivo(const vector<vector<int>>& estado) {
    return estado == OBJETIVO;
}

// Função para gerar uma nova configuração ao mover a peça
vector<vector<int>> mover(const vector<vector<int>>& estado, int x1, int y1, int x2, int y2) {
    vector<vector<int>> novoEstado = estado;
    swap(novoEstado[x1][y1], novoEstado[x2][y2]);
    return novoEstado;
}

// Função auxiliar para verificar se um estado já foi visitado
bool estadoJaVisitado(const vector<vector<vector<int>>>& visitados, const vector<vector<int>>& estado) {
    for (const auto& est : visitados) {
        if (est == estado) return true;
    }
    return false;
}

// Função para resolver o 8-puzzle usando busca em largura (BFS) com vetor em vez de fila
vector<pair<pair<int, int>, pair<int, int>>> resolver8Puzzle(const vector<vector<int>>& estadoInicial) {
    vector<pair<vector<vector<int>>, vector<pair<pair<int, int>, pair<int, int>>>>> lista;
    vector<vector<vector<int>>> visitados;
    
    lista.push_back({estadoInicial, {}});
    visitados.push_back(estadoInicial);
    
    while (!lista.empty()) {
        auto [estadoAtual, caminho] = lista.front();
        lista.erase(lista.begin()); // Remove o primeiro elemento, simulando uma fila
        
        if (eObjetivo(estadoAtual)) return caminho; // Solução encontrada
        
        auto [vazioX, vazioY] = encontrarVazio(estadoAtual);
        
        // Definindo os movimentos: cima, baixo, esquerda, direita
        vector<pair<int, int>> movimentos = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for (const auto& [dx, dy] : movimentos) {
            int novoX = vazioX + dx;
            int novoY = vazioY + dy;
            
            if (novoX >= 0 && novoX < 3 && novoY >= 0 && novoY < 3) { // Verifica movimento válido
                vector<vector<int>> novoEstado = mover(estadoAtual, vazioX, vazioY, novoX, novoY);
                
                if (!estadoJaVisitado(visitados, novoEstado)) {
                    visitados.push_back(novoEstado);
                    auto novoCaminho = caminho;
                    novoCaminho.push_back({{vazioX, vazioY}, {novoX, novoY}});
                    lista.push_back({novoEstado, novoCaminho});
                }
            }
        }
    }
    return {}; 
}

int main() {
    vector<vector<int>> estadoInicial = {
        {1, 2, 3},
        {4, 0, 5},
        {7, 8, 6}
    };

    auto solucao = resolver8Puzzle(estadoInicial);

    if (!solucao.empty()) {
        cout << "Passo a passo para resolver o 8-puzzle:" << endl;
        for (size_t passo = 0; passo < solucao.size(); ++passo) {
            auto [origem, destino] = solucao[passo];
            cout << "Passo " << passo + 1 << ": mover peça de (" 
                 << destino.first << ", " << destino.second << ") para ("
                 << origem.first << ", " << origem.second << ")" << endl;
        }
    } else {
        cout << "Não foi encontrada uma solução." << endl;
    }

    return 0;
}
