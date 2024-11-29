#include<stdio.h>
void main() {
    int A[10][7], elementosPar = 0, elementosImpar = 0, i, j;

    for (i = 0; i<10; i++) {
        for (j = 0; j<7; j++) {
            A[i][j] = (i*7) + j;
            if (A[i][j] % 2 == 0){
                elementosPar++;
            } else { 
                elementosImpar++;
            }
        }
    }
    printf("Total de elementos pares: %d  - Percentual de elementos pares: %d\nTotal de elementos Impares:%d  - Percentual de elementos Impares: %d\nTotal de Elementos: %d", elementosPar, elementosPar*100/(elementosImpar + elementosPar), elementosImpar, elementosImpar*100/(elementosImpar+elementosPar), elementosImpar+elementosPar);

}