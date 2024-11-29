#include<stdio.h.>
void main() {
    int A[5][6], B[5][6], C[5][6], j, l, i = 0, k = 0; 

    for(i = 0; i<5 ;i++) {
        j = 0; 
        l = 0;
        while(j!=6 || l!=6){
            if((k%3 == 0) && (k%4 == 0) && j<6) {
                A[i][j] = k;
                j++; 
            } 
            if(((k%5==0) || (k%6 == 0)) && l<6) {
                B[i][l] = k;
                l++;
            }
            k++;
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}