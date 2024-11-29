#include<stdio.h>
void main() {
    float A[5][5], B[5][5], sum;
    int i, j;
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            A[i][j] = (i*5) + j;
        }
        sum += A[i][i];
    }
    printf("Somatorio da diagonal principal: %.2f", sum);
}