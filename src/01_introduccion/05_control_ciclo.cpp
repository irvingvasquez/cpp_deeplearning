
// Este programa incrementa un entero mientras sea menor que 100
#include <iostream>

int main(int argc, char **argv) {
    int vtermino = 2, nterminos;
    printf("Ingrese el termino a encontrar \n");
    scanf("%d", &nterminos);    
    printf("%d \r\n",vtermino);
    
    for(int i=1; i<nterminos; i++)
    {
        if(i%2)
            vtermino = vtermino -1;
        else
            vtermino = vtermino +3;
        printf("%d \r\n", vtermino);
    }   
}
