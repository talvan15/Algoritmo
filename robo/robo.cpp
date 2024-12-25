#include <stdio.h>
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

#define ALTURA 20
#define LARGURA 20
char simbolo = '@';

void MoveEsquerda(int *x);
void MoveDireita(int *x);
void MoveCima(int *y);
void MoveBaixo(int *y);
void ImprimeMapa(int px, int py);
void LimiteTabuleiro(int *px, int *py);

int main() {
    int px, py;
    char ordem;
    int continua = 1;

    srand(time(0));
    px = 10;
    py = 10;

    ImprimeMapa(px, py);
    while (continua) {
        ordem = getchar();
        // system("cls"); // alterar para Linux: system("clear");
       
        switch (ordem) {
            case 'a': case 'A':
                MoveEsquerda(&px);
                LimiteTabuleiro(&px, &py);
                ImprimeMapa(px, py);
                break;
            case 'd': case 'D':
                MoveDireita(&px);
                LimiteTabuleiro(&px, &py);
                ImprimeMapa(px, py);
                break;
            case 'w': case 'W':
                MoveCima(&py);
                LimiteTabuleiro(&px, &py);
                ImprimeMapa(px, py);
                break;
            case 's': case 'S':
                MoveBaixo(&py);
                LimiteTabuleiro(&px, &py);
                ImprimeMapa(px, py);
                break;
            case 'm': case 'M':
                simbolo = (simbolo == '@') ? '!' : '@';
                ImprimeMapa(px, py);
                break;

            case 'q': case 'Q':
                continua = 0;
                break;
        }

        LimiteTabuleiro(&px, &py);
        cout << ordem << " " << px << " " << py << "\n";
    }

    return 0;
}

void ImprimeMapa(int px, int py) {
    int x, y;
    for (y = 0; y < ALTURA; y++) {
        for (x = 0; x < LARGURA; x++) {
            if ((px == x) && (py == y)) {
                cout << " " << simbolo << " ";
            } else {
                cout << " + ";
            }
        }
        printf("\n");
    }
}

void LimiteTabuleiro(int *px, int *py) {
    if(*px > 19){
        (*px) --;   
    }
    else if (*px < 0)
    {
        (*px) ++;
    }
    

    if(*py > 19){
        (*py)--;
    }
    else if(*py < 0){
        (*py) ++;
    }
    
  
}

void MoveEsquerda(int *x) {
    if (*x > 0) (*x)--;
}

void MoveDireita(int *x) {
    if(*x <= 19) (*x) ++;
}

void MoveCima(int *y) {
    if (*y > 0) (*y) --;
}

void MoveBaixo(int *y) {
    if(*y <= 19) (*y) ++;
}