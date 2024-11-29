#include<stdio.h>
#include<math.h>
void main(){

  int A[7], B[7], C[7][2], i, j, x;

  //MATRIZ A//
  printf("MATRIZ A \n\n");
  for (i=0;i<7;i++){
    printf("Valor: ");
    scanf("%d", &x);
    A[i]=x;
  }

 //MATRIZ B//
  printf("\n\nMATRIZ B \n\n");
  for (i=0;i<7;i++){
    printf("Valor: ");
    scanf("%d", &x);
    B[i]=x;
  }

  //MATRIZ C//
    for (i=0;i<7;i++)
        C[i][0]=A[i];
    for (i=0;i<7;i++)
        C[i][1]=B[i];

    //EXIBIR A MATRIZ C//
    printf("\n MATRIZ C: \n");
    for (i=0;i<7;i++){
        printf("|");
        for (j=0;j<2;j++)
            printf(" %d ", C[i][j]);
        printf("|");
        printf("\n");
    }
}
