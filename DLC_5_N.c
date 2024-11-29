#include<stdio.h>
void main() {
    int A[7][7], i, j, elementsDivisibleByTwo = 0;

    for (i = 0; i<7; i++){
        for (j = 0; j<7; j++){
            A[i][j] = (i*7) + j;
            if ((A[i][j]%2) == 0) {
            elementsDivisibleByTwo++;
            }
        }
    }
    printf("Total de elementos diviseis por 2 na matriz A = %d", elementsDivisibleByTwo);
}
