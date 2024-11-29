#include<stdio.h>
#include<math.h>
void main(){

float A[12], B[12], C[12][2], x;
int i, j;
printf("MATRIZ A\n");
for (i=0;i<12;i++){
    printf("%d VALOR: ", i+1);
    scanf("%f", &x);
    A[i]=x;
    C[i][0]= A[i]*2;
}printf("\n MATRIZ B \n");
for (i=0;i<12;i++){
    printf("%d VALOR: ", i+1);
    scanf("%f", &x);
    B[i]=x;
    C[i][1] = B[i]-5;
}
printf("\n\n MATRIZ A:\n\n");
for (i=0;i<12;i++){
    printf("%.2f", A[i]);
}
printf("\n\n MATRIZ B:\n\n");
for (i=0;i<12;i++){
    printf("%.2f", B[i]);
}
printf("\n\n MATRIZ C:\n\n");
for (i=0;i<12;i++){
    printf("|");
    for(j=0;j<2;j++){
    printf(" %.2f", C[i][j]);
    }
    printf("|\n");
}
}
