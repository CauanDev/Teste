#include <stdio.h>

int fibonacci(int num) 
{
    int a = 0, b = 1, aux;
    while (b <= num) 
    {
        if (b == num) 
        {
            return 1; 
        }
        aux = a;
        a = b;
        b = aux + b;
    }
    return 0; 
}

int main()
{
    int num;
    printf("Digte um numero: ");
    scanf("%d",&num);
    
    if (fibonacci(num)) 
    {
        printf("O numero pertence a sequencia de Fibonacci");
    } else 
    {
        printf("O numero não pertence a sequencia de Fibonacci");    
    }

    return 0;
}
