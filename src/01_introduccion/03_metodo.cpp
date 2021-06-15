//este programa calcula el cuadrado de un numero mediante un método

#include <stdio.h>

// Método que calcula el cuadrado
float cuadrado (float num)
{
    float res;
    res=num*num;
    return res;
}


int main()
{
    float num,res;
    printf("teclea el numero\n");
    scanf("%f",&num);
    // Aqui se invoca el método
    res=cuadrado(num);
    printf("el resultado de calcular el cuadrado el numero:%f es: %f \n", num, res);
}    

