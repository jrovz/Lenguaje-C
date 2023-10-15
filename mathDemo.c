#include <stdio.h>
#include <math.h>

int x;
float result;

int main()
{
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    result = cos(x);
    printf("el valor ingresado es: %d\n", x);
    printf("el valor del coseno de x es: %f\n", result);
}