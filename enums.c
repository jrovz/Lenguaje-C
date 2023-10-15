#include <stdio.h>

enum weekdays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
    enum weekdays today;
    today = Sunday;
    printf("Day %d", today+1);
    return 0;
}