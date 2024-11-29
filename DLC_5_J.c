#include<stdio.h>
void main() {
    int A[6][5], B[6][5], i, j;
    printf("Matriz A - Matriz B\n");
    for (i = 0; i<6; i++) {
        for (j = 0; j<5; j++) {
            A[i][j] = i * 6 + j;
            if(A[i][j]%2==0) {
                B[i][j] = A[i][j] + 5;
            } else {
                B[i][j] = A[i][j] - 4;
            }
            printf("   %d     -    %d\n", A[i][j], B[i][j]);
        }
    }
}