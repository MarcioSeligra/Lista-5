#include<stdio.h>
#include<stdlib.h>
void main () {
    int A[4][5], B[4][5], C[4][5];
    int i, j, k, lixo;

    for (i=0; i<4; i++) {
        for (j=0; j<5; j++) {
            for (k=1; k<=50; k++) {
                if ((k%3)==0 || (k%4)==0) {
                    A[i][j]=k;
                }
                else if ((k%5)==0 || (k%6)==0) {
                    B[i][j]=k;
                }
                else {
                    lixo=k;
                }
                C[i][j]=A[i][j]*B[i][j];
            }
        }
    }
    printf("\n\nMatriz A\n");
    for (i=0; i<4; i++) {
        printf("| ");
        for (j=0; j<5; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("| \n");
    }
    printf("\n\nMatriz B\n");
    for (i=0; i<4; i++) {
        printf("| ");
        for (j=0; j<5; j++) {
            printf(" %d ", B[i][j]);
        }
        printf("| \n");
    }
    printf("\n\nMatriz C\n");
    for (i=0; i<4; i++) {
        printf("| ");
        for (j=0; j<5; j++) {
            printf(" %d ", C[i][j]);
        }
        printf("| \n");
    }
}