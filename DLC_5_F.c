#include<stdio.h>
#include<math.h>
void main(){
    int A[5][4], B[5][4], i, j, k, x;
    for (i=0;i<4;i++)
        for(j=0;j<4;j++){
            A[i][j]=(i*4) + j;
            B[i][j] = A[i][j];
            for (k=A[i][j]-1;k>0;k--)
                B[i][j]*=k;
    }
    for (i=0;i<5;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf(" %d ",B[i][j]);
        }
        printf("|\n");
}
}
