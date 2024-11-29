#include<stdio.h.>
void main() {
    int A[5][5], B[5][5], C[5][5], j, l, i = 0, k = 0; 

    for(i = 0; i<5 ;i++) {
        j = 0; 
        l = 0;
        while(j!=5 || l!=5){
            if((k%3 != 0) && j<5) {
                A[i][j] = k;
                j++; 
            } 
            if((k%6 != 0) && l<5) {
                B[i][l] = k;
                l++;
            }
            k++;
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}