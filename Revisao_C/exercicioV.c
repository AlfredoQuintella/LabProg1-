#include <stdio.h>

int fibonacci(int n){
    int x;
    if (n == 1){
        return (1);
    }

    if (n == 2){
        return (1);
    }

    x = fibonacci(n - 1) + fibonacci(n - 2);
    return (x);
}

int main(){
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    printf("O numero %d de fibonacci eh: %d", n, fibonacci(n));
}
