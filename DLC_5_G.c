#include<stdio.h>

void main() {
    float A[4][5], B[4][5];
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            A[i][j] = 32 * i + j + i + 1;
            B[i][j] = (A[i][j] * 9 / 5) + 32;
            printf("%.2f = °F  %.2f\n", A[i][j], B[i][j]);
        }
    }
}
