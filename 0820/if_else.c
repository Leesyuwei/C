#include <stdio.h>

void main()
{
    int num = 0;
    printf("num:");
    scanf("%d", &num);

    printf("%d is %s", num, num % 2 ? "odd" : "even");
}