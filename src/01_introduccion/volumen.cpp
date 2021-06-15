#include <iostream>
#include <stdio.h>

#define PI 3.1416f

int main(int argc, char **argv) {
    // declarar variables
    
    float re, ri, l;
    float ab;
    float vol_final;
    
    // leer variables
    printf("Radio exterior: ");
    scanf("%f", &re);
    
    printf("Radio interior: ");
    scanf("%f", &ri);
    
    printf("Longitud: ");
    scanf("%f", &l);
    
    // operaciones
    ab = PI * re * re - PI * ri * ri;
    vol_final = ab * l;
    
    // imprimir volumen
    printf("El volumen exterior es: %f \n", vol_final);
    
    return 0;
}

