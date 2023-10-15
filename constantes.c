#include <stdio.h>

#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main()
{

    float costoPizzas;
    float numberSlices = 5;
    costoPizzas = PIZZACOST * numberSlices; // statement o declaración (unidad de codigo)
    printf("Total bill:%c %f", NEWLINE, costoPizzas);
}