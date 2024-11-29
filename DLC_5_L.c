#include<stdio.h>
void main() {
    int A[15][15], sum=0;
    int i, j;
    for (i = 0; i<15; i++){
        for (j = 0; j<15; j++){
            A[i][j] = (i*15) + j;
        }
        if ((A[i][i]%2)==0){
            sum += A[i][i];
        }
    }
    printf("Somatorio dos elementos pares da diagonal principal: %d", sum);
}
