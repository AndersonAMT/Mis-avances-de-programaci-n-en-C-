#include <iostream>
#include <stdio.h>
#include <math.h>
int main (){   
     float lado1, lado2, lado3, radio, semiperimetro, area;

    printf("Ingrese la longitud del primer lado: ");
    scanf("%f", &lado1);

    printf("Ingrese la longitud del segundo lado: ");
    scanf("%f", &lado2);

    printf("Ingrese la longitud del tercer lado: ");
    scanf("%f", &lado3);

    printf("Ingrese el radio del círculo circunscrito: ");
    scanf("%f", &radio);

    semiperimetro = (lado1 + lado2 + lado3) / 2;
    area = (radio * semiperimetro)

    printf("\nSemiperimetro del triangulo: %.2f\n", semiperimetro);
    printf("Area del triangulo circunscrito: %.2f\n", area);


    return 0;
}