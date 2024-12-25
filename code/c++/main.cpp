#include <iostream>

using namespace std;

string funcao(int x){
    string nomes[] = {"A", "B"};

    const int tam = 26;
    char alfa[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for (int i = 0; i < tam; i++)
    {
        if (x == i+1)
        {
             for (int j = 0; j < x; j++)
             {
                cout << alfa[j] << ", ";
             }
             
        } 
    }
        if(x > tam || x < 1){
            cout << "Digite um numero valido! " << endl;
        }
        
    
}
int main()
{  
    int x;
    cout << "Digite um numero entre 1 e 26 " << endl;
    cin >> x;
    funcao(x);
}