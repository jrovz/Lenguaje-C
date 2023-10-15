#include <stdio.h>

int a, b;

int add(int a, int b);


int main()
{
    
    printf("el resultado es: ", add(100,100));
    return 0;
}


int add(int a, int b)
{
    int add;
    add = a + b;
    return add;
}