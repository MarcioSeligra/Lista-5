#include<stdio.h>
#include<math.h>
void main(){

int A[10], C[10][3], i, j, x, fat;
for (i=0;i<10;i++){
    printf("VALOR: ");
    scanf("%d", &x);
    A[i]=x;
    C[i][0]=A[i]+5;
    C[i][1]=1;
    for (j=A[i];j>0;j--){
        C[i][1]*=j;
    }
    C[i][2]=pow(A[i],2);
}
for (i=0;i<10;i++){
    printf("|");
    for(j=0;j<3;j++){
    printf(" %d ",C[i][j]);
    }
    printf("|\n");
}
}

