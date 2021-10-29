#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);
    if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
    {
        printf("\nis alphabet");
    }
    else
    {
        printf("\nis character");
    }
}
