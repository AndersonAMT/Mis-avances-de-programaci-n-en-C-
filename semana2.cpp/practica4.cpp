#include <iostream>
#include <stdio.h>
#include <math.h>
int main (){   
    float baseMayor, baseMenor, altura, area;

    printf("Ingrese la longitud de la base mayor: ");
    scanf("%f", &baseMayor);

    printf("Ingrese la longitud de la base menor: ");
    scanf("%f", &baseMenor);

    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    area = ((baseMayor + baseMenor) / 2) * altura;

    printf("\nÁrea del trapecio: %.2f\n", area);


    return 0;
}