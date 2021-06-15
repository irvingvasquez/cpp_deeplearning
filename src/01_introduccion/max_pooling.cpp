
#include <iostream>

int MAX(int a, int b, int c, int d)
{
    int max;
    
    return max;
}

int main(int argc, char **argv) {
 
    int size_r = 3;
    int size_i = 6;
    int I[size_i][size_i];
    int R[size_r][size_r];

    // rellenar la matriz
    int num;
    for (int i=0;i<size_i; i++){
        for(int j=0;j<size_i; j++){
            printf("Introduce el elemento [%d][%d]",i,j);
            scanf("%d", &num);
            I[i][j] = num;
        }
    }
    
    //imprimir matriz
    for (int i=0;i<size_i; i++){
        for(int j=0;j<size_i; j++){
            printf(" %d", I[i][j]);
        }
        printf("\n");
    }
}
