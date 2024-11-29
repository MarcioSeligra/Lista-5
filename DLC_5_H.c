#include <stdio.h>
void main() {

    int A[5][5], B[5][5], i, j;
    printf("MATRIZ A\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            B[i][j] = A[i][j]*2;
        }
    }
    for (i = 0; i < 5; i++) {
        B[i][i] = 3 * A[i][i];
    }
    printf("\nMATRIZ B\n");
    for (i = 0; i < 5; i++) {
            printf("|");
        for (j = 0; j < 5; j++) {
            printf("%d ", B[i][j]);
        }
        printf("|\n");
    }
}
