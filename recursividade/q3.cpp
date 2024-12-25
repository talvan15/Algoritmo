#include <iostream>
using namespace std;

int procura(int x, int v, int n){
    if(v == x) return n;
    else return procura(x,v,(n-1));
}

int main()
{

}