#include <iostream>
using namespace std;

int somatorio(int n){
    if (n == 0) return 0;
    return n + somatorio (n-1);
}
int main()
{
    int n = 3;
    cout << somatorio(n);
}