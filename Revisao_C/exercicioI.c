#include <stdio.h>

int main(){
    int n;
    printf("insira o valor de n: ");
    scanf("%d", &n);
    for(int i = 1; i< n / 2; i++){
        printf("%d ", 2 * (i));
    } 
}
