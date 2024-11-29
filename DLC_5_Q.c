#include<stdio.h>
void main() {
    int A[4][5], B[4], C[5],columnSum = 0, rowSum = 0, i, j;

    for (i = 0; i<4; i++) {
        for (j = 0; j<5; j++) {
            A[i][j] = i*5 + j;
        }
    }
    for(i = 0; i < 4; i ++) {
        for(j = 0, B[i] = 0; j < 5; j++) {
            B[i] += A[i][j];
        }
        rowSum += B[i];
    }
    for(j = 0; j < 5; j++) {
        for(i = 0, C[i] = 0; i < 4; i++) {
            C[j] = A[i][j];
        }
        columnSum += C[j];
    }
    printf("Somatório das linhas: %d\nSomatório das colunas: %d",rowSum, columnSum);
}