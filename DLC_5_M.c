#include<stdio.h>
void main() {
    float A[5][5], sum;
    int i, j;
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            A[i][j] = (i*5) + j;
        }
        if((i%2)!=0)
            sum += A[i][i];
    }
    printf("Somatorio dos elementos com indices impares iguais da diagonal princial: %.2f", sum);
}
