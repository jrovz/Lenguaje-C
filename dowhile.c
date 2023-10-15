#include <stdio.h>

int n = 20;

int main()
{
    do
    {
        printf("el número es: %d\n", n);
        n = n-1;
    } while (n>10);
    return 0;
}