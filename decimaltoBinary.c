#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12],n,i,count;

int main()
{
    system("cls");
    system("color 9F");
    printf("ingrese un valor decilam \n");
    scanf("%d", &n);

    for (i=0; n>0;i++)
    {
        binaryNumber[i]=n%2;
        n=n/2;
    }
    printf("el resultado de la conversion es: \n");
    for (i=i-1; i>=0 ; i--)
    {
        printf("%d", binaryNumber[i]);
    }
    return 0;
}