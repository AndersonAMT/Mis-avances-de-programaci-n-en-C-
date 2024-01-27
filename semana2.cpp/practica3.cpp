#include <iostream>
#include <stdio.h>
#include <math.h>
int main (){    
    float diagonal1, diagonal2, lado, area, perimetro;

    printf("Ingrese la longitud de la primera diagonal: ");
    scanf("%f", &diagonal1);

    printf("Ingrese la longitud de la segunda diagonal: ");
    scanf("%f", &diagonal2);

    lado = sqrt((diagonal1 * diagonal1 + diagonal2 * diagonal2) / 2);
    area = (diagonal1 * diagonal2) / 2;
    perimetro = 4 * lado;

    printf("\nLado del rombo: %.2f\n", lado);
    printf("Area del rombo: %.2f\n", area);
    printf("Perímetro del rombo: %.2f\n", perimetro);
//Solo logre dar en concidencia con el area, los otros resultados
//no entiendo porque salen diferentes
    return 0;
}