#include <stdio.h>
#include <string.h>


int main()
{
    char string1[60];
    printf("Escribe una frase:\n");
    gets(string1);

    strrev(string1);
    printf("el string al reves es: %s\n",string1);
}