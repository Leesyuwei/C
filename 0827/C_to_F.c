#include <stdio.h>
#include <stdlib.h>

void main()
{
    float F, C;
    printf("Celcius:");
    scanf("%f", &C);
    F = (9.0 / 5.0) * C + 32;
    printf("\nFahrenheit:%f", F);
}
