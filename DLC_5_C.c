#include<stdio.h>
#include<math.h>
void main(){

int A[4][5], i, j, x;

//MATRIZ A//
for (i=0;i<4;i++)
    for(j=0;j<5;j++){
    printf("DIGITE UM VALOR:");
    scanf("%d",&x);
    A[i][j]=x;
    }
//EXIBINDO//
printf("\n\n MATRIZ A\\n\n");
for (i=0;i<4;i++){

    printf("|");
    for(j=0;j<5;j++){
    printf(" %d ",A[i][j]);
    }
    printf("|\n");
}
}
