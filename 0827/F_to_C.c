#include <stdio.h>
#include <stdlib.h>

void main()
{
    float F, C;
    printf("Fahrenheit:");
    scanf("%f", &F);
    C = (F - 32.0) * (5.0 / 9.0);
    printf("\nCelcius:%f", C);
}
