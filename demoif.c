#include <stdio.h>

int n = 11;

int main()
{
    if(n > 10)
        printf("el número es mayor que diez");
    else if (n==10)
        printf("el número es mayor que veinte");
    else if (n < 10)
        printf("el número es menor que diez");
    else 
        printf("error no hay número");
    return 0;
}