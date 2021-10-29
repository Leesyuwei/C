#include <stdio.h>

void main()
{
    printf("example:%.2f\n", 1.23456);
    printf("example:%6.2f\n", 1.23456);
    printf("example:%-6.2f\n", 1.23456);

    printf("%*d\n,1,1");
    printf("%*d\n,2,1");
    printf("%*d\n,3,1");

    printf("%.*s\n", 3, "abcdefghijk");
    printf("%.*s\n", 5, "abcdefghijk");
    printf("%.*s\n", 7, "abcdefghijk");
}