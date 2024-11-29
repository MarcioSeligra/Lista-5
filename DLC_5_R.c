#include<stdio.h>
void main() {
    int A[4], B[4], C[4], D[4], i, j, E[4][4], k;
    int* L[] = {A, B, C, D};

    for(i = 0; i < 4; i++) {
        A[i] = i;
        B[i] = i*4 + i;
        C[i] = 8*i + i;
        D[i] = 16*i + i;
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            E[i][j] = L[i][j] * (2 + i);  
        }
    }
    for(j=0; j<4; j++){
        E[3][j] = L[3][j];
        for(k = 1; k < L[3][j]; k++) {
            E[i][j] *= k;
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("E[%d][%d] = %d\n", i, j, E[i][j]);
        }
    }


}