#include <stdio.h>

void main()
{
    char buf[50];

    printf("number 1~5:");
    scanf("%[1-5]", buf);
    printf("%s\n", buf);

    fflush(stdin);
}