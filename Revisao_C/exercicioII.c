#include <stdio.h>

void sub(int a){
    if(a <= 2) return;
    else{
        sub(a - 2);
        if(a % 2) printf("%d ", a - 1);
        else printf("%d ", a - 2);
        return;
    }
}

int main(){
    int n;
    printf("insira n: ");
    scanf("%d", &n);
    sub(n);
}
