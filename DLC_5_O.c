#include<stdio.h>
void main() {
    float A[8][6], B[8], sum=0;
    int i, j;
    for (i = 0; i<8; i++){
        B[i] = 0;
        for (j = 0; j<6; j++){
            A[i][j] = (i*8) + j;
            B[i] += A[i][j];
        }
        sum += B[i];
    }
    printf("Somatorio dos elementos da matriz B = %.2f", sum);
}