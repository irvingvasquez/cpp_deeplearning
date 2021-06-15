

// Este programa invierte un arreglo
#include <iostream>

int main(int argc, char **argv) {
    int n=0;
    int aux=0;
    
    printf("proporciona la longitud:");
    scanf("%d", &n);
    int data[n];
    
    // capturamos elementos
    for(int i=0; i<n; i++)
    {
        printf("Elemento %d", i+1);
        scanf("%d", &data[i]);
    }
    
    //imprimir vector
    for(int i = 0; i<n; i++)
    {
        printf("Elemento %d: %d \n", i+1, data[i]);
    }
    
    // invertir vector
    for (int i =0; i<n/2; i++)
    {
        aux = data[i];
        data[i] = data[n-i-1];
        data[n-i-1] = aux;
    }
    
    //imprimir vector
    for(int i = 0; i<n; i++)
    {
        printf("Elemento %d: %d \n", i+1, data[i]);
    }
    
    return 0;
}
