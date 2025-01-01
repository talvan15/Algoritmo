#include <iostream>
using namespace std;

int fibRecur(int n){
    if(n < 3) return 1;
    else{
        return fibRecur(n - 1) + fibRecur(n - 2);
    }
}

int fibIter(int n){

    int a = 0, b = 1;
    int fib;

    if(n < 3) return 1;
    else{
        for (int i = 2; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }
        
        return fib;
    }
}
int main()
{
    int n = 10;
    cout << "Fibonacci recursivo: " << endl;
    cout << fibRecur(n);

    cout << endl;

    cout << "Fibonacci iterativo "<< endl;
    cout << fibIter(n) << endl;

    return 0;
}