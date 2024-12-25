#include <stdio.h>
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

#define ALTURA 20
#define LARGURA 20

void MoveParaComida(int *px, int *py, int comidaX, int comidaY);
void GeraComida(int *comidaX, int *comidaY, int px, int py);
void ImprimeMapa(int px, int py, int comidaX, int comidaY);
void LimiteTabuleiro(int *px, int *py);

char simbolo = '@'; 

int main() {
    int px = 10, py = 10;       
    int comidaX, comidaY;       
    int continua = 1;

    srand(time(0));
    GeraComida(&comidaX, &comidaY, px, py); 

    while (continua) {
        system("clr"); 

        ImprimeMapa(px, py, comidaX, comidaY);

        if (px == comidaX && py == comidaY) { 
            GeraComida(&comidaX, &comidaY, px, py); 
            cout << "O robô encontrou a comida! Nova comida gerada.\n";
        } else {
            MoveParaComida(&px, &py, comidaX, comidaY); 
        }

        LimiteTabuleiro(&px, &py);
        getchar();
         
    }

    return 0;
}

void ImprimeMapa(int px, int py, int comidaX, int comidaY) {
    int x, y;
    for (y = 0; y < ALTURA; y++) {
        for (x = 0; x < LARGURA; x++) {
            if (px == x && py == y) {
                cout << " " << simbolo << " "; 
            } else if (comidaX == x && comidaY == y) {
                cout << " # "; 
            } else {
                cout << " + ";
            }
        }
        cout << endl;
    }
}

void GeraComida(int *comidaX, int *comidaY, int px, int py) {
    do {
        *comidaX = rand() % LARGURA;
        *comidaY = rand() % ALTURA;
    } while (*comidaX == px && *comidaY == py);
} 

void MoveParaComida(int *px, int *py, int comidaX, int comidaY) {
    if (*px < comidaX) {
        (*px)++;
    } else if (*px > comidaX) {
        (*px)--;
    }

    if (*py < comidaY) {
        (*py)++;
    } else if (*py > comidaY) {
        (*py)--;
    }
}

void LimiteTabuleiro(int *px, int *py) {
    if (*px < 0) *px = 0;

    if (*px >= LARGURA) *px = LARGURA - 1;

    if (*py < 0) *py = 0;

    if (*py >= ALTURA) *py = ALTURA - 1;
}
