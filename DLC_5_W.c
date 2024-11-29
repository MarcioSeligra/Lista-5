#include<stdio.h>
void main() {
    int A[5][5], B[5][5], i, j, k;
    for (i = 0; i<5; i++) {
        for (j = 0; j<5; j++) {
            A[i][j] = 1;

            if(j == (4-i)) {
                B[i][j] = A[i][j]*3;
            } else {
                B[i][j] = A[i][j]*2;
            }
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}