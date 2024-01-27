#include <iostream>
#include <stdio.h>
#include <math.h>

int main (){

    float lado,area,perimetro,diagonal;
    
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    perimetro = 4 *lado;
    diagonal = lado * sqrt(2);
    

    printf("El area del cuadro es: %f\n", area);
    printf("El perimetro del cuadro es: %f\n", perimetro);
    printf("La diagonal del cuadro es: %f\n", diagonal);


    return 0;
}