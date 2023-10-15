#include <stdio.h>

int opt1 = 1;
int opt2 = 2;

int main()
{
    if (opt1 == 0)
    {

        /* Menú de seleccion de bebida*/
        printf("Usted eligio la opción 0, vera nuestro menu de bebidas, elija una:\n");
        printf("opción 0 para rovicola \n");
        printf("opción 1 para una botella de agua \n");
        printf("opción 0 para tinto  \n");

        if (opt2 == 0)
            printf("Usted eligio la rovicola, mm rico");
        else if (opt2 == 1)
            printf("usted eligio una botella de agua");
        else if (opt2 == 2)
            printf("eligio el tinto");
        else
            printf("opción invalida");
    }

    else if (opt1 == 1)
    {
        /* Menú de selección de postre*/
        printf("Eligio el menú de postres seleccione uno:\n");
        printf("opción 0 para torta \n");
        printf("opción 1 para galleta con arequipe \n");
        printf("opción 0 para helado \n");
        if (opt2 == 0)
            printf("Usted eligio la torta");
        else if (opt2 == 1)
            printf("usted eligio una galleta con arequipe");
        else if (opt2 == 2)
            printf("eligio el helado");
        else
            printf("opción invalida");
    }

    return 0;
}