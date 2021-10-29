#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch = 'a';
    printf("ch=%c\n", ch);
    printf("ch=%c\n", ch + 1);
    printf("ASCII: %d\n", ch);

    char ch1 = 256 + 90;
    printf("ch1=%c\n", ch1);
}