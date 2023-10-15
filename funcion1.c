#include <stdio.h>

/*Inicializamos la función*/
int power(int base, int n);

int main()
{
    int n; // declaramos variables del main
    n = 3;
    
    printf("n = %d el resultado de la potencia = %d\n", n, power(2,n));
    printf("el valor del exponente original n sigue siendo: %d\n", n);
    return 0;
}

int power(int base, int n)
{
    int p;
    for (p=1; n > 0; n--)
    {
        p=p*base;
        printf("el valor temporal de n es: %d\n", n);
    }
    return p;

}