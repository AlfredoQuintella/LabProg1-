#include <stdio.h>

int main(){
    int n, termo = 0, anterior = 1, fib = 0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        termo = fib;
        fib += anterior;
        anterior = termo;
    }
    printf("O numero %d de fibonacci eh: %d", n, fib);
}
