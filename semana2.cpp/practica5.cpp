#include <iostream>
#include <stdio.h>
#include <math.h>
int main (){   
     float base, altura, lado1, lado2, perimetro, area;

    printf("Ingrese la longitud de la base: ");
    scanf("%f", &base);

    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    printf("Ingrese el lado1: ");
    scanf("%f", &lado1);

    printf("Ingrese el lado2: ");
    scanf("%f", &lado2);

    perimetro = base + lado1 + lado2;

    area = 0.5 * (base * altura);

    printf("\nPerimetro del triangulo: %.2f\n", perimetro);
    printf("Area del triangulo: %.2f\n", area);

    return 0;
}