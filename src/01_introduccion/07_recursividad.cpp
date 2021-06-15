
#include <iostream>

// este programa imprime la serie fibonacci de forma recursiva

int Fib(int n)
{
    int actual;
        
    if(n == 1)
    {
        actual = 1;
    }
    
    if(n == 2)
    {
        actual = 1;
    }
    
    if(n>2)
    {
        actual = Fib(n-2) + Fib(n-1);
    }
    
    return actual;
}


int impFib(int n)
{
    int actual;
        
    if(n == 1)
    {
        actual = 1;
        printf("%d ", actual);
    }
    
    if(n == 2)
    {
        actual = 1;
        impFib(n-1);
        printf("%d ", actual);
    }
    
    if(n>2)
    {
        actual = Fib(n-2) + impFib(n-1);
        printf("%d ", actual);
    }
    
    return actual;
}



int main(int argc, char **argv) {
    int n;
    printf("teclea el numero\n");
    scanf("%d",&n);
    impFib(n);
    
    return 0;
}
