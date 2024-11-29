#include<stdio.h>
void main () {
    int A[7][7], B[7][7];
    int i, j, k;
    for (i=0; i<7; i++)
        for (j=0; j<7; j++) {
            A[i][j]=i+j;
            if ((i==j) && (i==0 || i==2 || i==4 || i==6)) {
                B[i][j]=1;
            }
            else {
                B[i][j]=0;
            }
        }

    for (i=0; i<7; i++)
        for (j=0; j<7; j++) {
            for (k=1; k<=A[i][j]; k++) {
                if ((i==j) && (i==0 || i==2 || i==4 || i==6)) {
                    B[i][j]*=k;
                }
                else {
                    B[i][j]+=k;
                }
            }
        }
    for (i=0; i<7; i++) {
        printf("| ");
        for (j=0; j<7; j++) {
            printf(" %d ", B[i][j]);
        }
        printf("| \n");
    }
}