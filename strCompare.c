#include <stdio.h>
#include <string.h>

char string1[60];
char string2[60];
int main()
{
    
    printf("Escribe una frase:\n");
    gets(string1);

    printf("Escribe otra frase: \n");
    gets(string2);
    
    
    if(strcmp(string1, string2)==0)
        printf("ingresaste 2 strings identicos\n");
    else
        printf("ingresaste 2 cosas distintas\n");
    
    return 0;
}