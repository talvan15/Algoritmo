#include <stdio.h>

int soma(int a, int b){
    printf("%i", a + b);
    return a + b;
}
int main(){
    int a = 2, b = 3;
    printf("Hello world\n");

    soma(a,b);


    return 0;
}