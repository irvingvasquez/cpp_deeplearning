// Este programa verifica si un número es múltiplo de otro
#include <iostream>

int main(int argc, char **argv) {
    int x,y, res;
    printf("teclea el numero x\n");
    scanf("%d",&x);
    printf("teclea el numero y\n");
    scanf("%d",&y);
    
    res = x % y;
    if(res == 0)
        printf("uno \n");
    if(res != 0)
        printf("cero \n");
    
    return 0;
}
