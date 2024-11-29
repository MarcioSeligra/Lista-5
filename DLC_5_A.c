#include<stdio.h>
#include<math.h>
void main(){

    int A[5][3], B[5][3], C[5][3], i, j,x;
    //MATRIZ A//
    printf("MATRIZ A: \n");
    for (i=0;i<5;i++)
        for (j=0;j<3;j++){
            printf("Valor: ");
            scanf("%d",&x);
            A[i][j
            ]=x;
        }
    //MATRIZ B//
    printf("MATRIZ B: \n");
    for (i=0;i<5;i++)
        for (j=0;j<3;j++){
            printf("Valor: ");
            scanf("%d",&x);
            B[i][j]=x;
        }
    //MATRIZ C//
    for (i=0;i<5;i++)
        for (j=0;j<3;j++)
            C[i][j]=A[i][j]+B[i][j];
    //EXIBINDO A MATRIZ C//
    printf("\n MATRIZ C: \n");
    for (i=0;i<5;i++){
        printf("|");
        for (j=0;j<3;j++)
            printf(" %d ", C[i][j]);
        printf("|");
        printf("\n");
    }
}

