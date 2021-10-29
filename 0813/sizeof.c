#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    printf("short   %d\n", sizeof(short));
    printf("int     %d\n", sizeof(int));
    printf("long    %d\n", sizeof(long));
    printf("float   %d\n", sizeof(float));
    printf("double  %d\n", sizeof(double));
    printf("long double %d\n", sizeof(long double));
    printf("char    %d\n", sizeof(char));
    printf("bool    %d\n", sizeof(bool));
    printf("true    %d\n", sizeof(true));
    printf("flase   %d\n", sizeof(false));
}