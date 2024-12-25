#include <iostream>
using namespace std;

void executar(){
    int condicao, a, b;
    
    cout <<"Digite os valores de A e B: " << endl;
    cin >> a;
    cin >> b;

    int sum = (a + b);
    cout << sum << endl;

    while(true){
        cout << "Quer executar novamente o programa ?" << endl;
        cout << "1 para sim:\n0 para nao:";
        cin >> condicao;
        
        if(condicao == 1){
            executar();
        } 
        else {
            cout << "Saindo..." << endl;
            break;
        }

    }   
}
int main()
{
    executar();
    return 0;
}