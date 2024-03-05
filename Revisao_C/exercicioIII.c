#include <stdio.h>

int main(){
    int a;
    int par = 0;
    int impar = 1;

    FILE *arq;

    arq = fopen("exercicioIII.txt", "r");

    if (arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    while (fscanf(arq, "%d", &a) == 1){
        if (!(a % 2)){
            par *= a;
        }
        else{
            impar += a;
        }
    }
    fclose(arq);

    printf("Soma dos impares: %d", impar);
    printf("Produto dos pares %d", par);
}
