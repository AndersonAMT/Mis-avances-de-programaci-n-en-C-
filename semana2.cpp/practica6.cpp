#include <iostream>
#include <stdio.h>
#include <math.h>
int main (){   
     float lado1, lado2, lado3, radio, area;

    printf("Ingrese la longitud del primer lado: ");
    scanf("%f", &lado1);

    printf("Ingrese la longitud del segundo lado: ");
    scanf("%f", &lado2);

    printf("Ingrese la longitud del tercer lado: ");
    scanf("%f", &lado3);

    printf("Ingrese el radio del círculo circunscrito: ");
    scanf("%f", &radio);

    area = (lado1 * lado2 * lado3) / (4 * radio);

    printf("\nArea del triangulo inscrito: %.2f\n", area);

    return 0;
}