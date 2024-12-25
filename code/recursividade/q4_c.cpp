#include <iostream>
using namespace std;

int powRecur(int a, int b){
    if (b == 0) return 1;
    else return a * powRecur(a, b-1);
}
int powIter(int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
    
}


int main()
{
    int a = 2, b = 3;
    cout << "Potencia recursiva " << endl;
    cout << powRecur(a,b);

    cout << endl;

    cout << "Potencia Iterativa: " << endl;
    cout << powIter(a, b);

}