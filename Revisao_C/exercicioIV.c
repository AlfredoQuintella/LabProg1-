#include <stdio.h>

int main(){
    int a;
    char sex;
    int SUMhomem = 0;
    int H = 0;
    int SUMmulher = 0;
    int M = 0;
    float nota;

    FILE *arq;

    arq = fopen("exercicioIII.txt", "r");

    if (arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    if (arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    while (fscanf(arq, "%c %f", &sex, &nota) == 1){
        if (sex == "F"){
            SUMmulher += nota;
            M++;
        }
        else{
            SUMhomem += nota;
            H++;
        }
    }
    fclose(arq);

    if((SUMmulher / M) > (SUMhomem / H)) printf("media das mulheres %f", (SUMmulher / M));
    else printf("media dos homens %f", (SUMhomem / H));
}
