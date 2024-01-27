#include <iostream>
#include <stdio.h>
#include <math.h>

int main (){

    float base,altura,area,perimetro,diagonal;
    
    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &altura);
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);
    

    printf("El area del rectangulo es: %f\n", area);
    printf("El perimetro del rectangulo es: %f\n", perimetro);
    printf("La diagonal del rectangulo es: %f\n", diagonal);


    return 0;
}