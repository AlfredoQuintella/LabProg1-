#include <stdio.h>

void sort(int arr[], int n)
{
   int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("insira o tamanho do vetor: ");
    scanf("%d", &n);
    int vec[n];
    printf("insira os %d elementos do vetor: ", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &vec[i]);
    }
    sort(vec, n);
    printf("o vetor ordenado fica: ");
    for(int i = 0; i<n; i++){
        printf("%d ", vec[i]);
    }
}
