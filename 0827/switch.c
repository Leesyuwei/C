#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    int a, b;
    char op;
    printf("calculate 2 intigers:");
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case ('+'):
        printf("%d+%d=%d\n", a, b, a + b);
        break;
    case ('-'):
        printf("%d-%d=%d\n", a, b, a - b);
        break;
    case ('*'):
        printf("%d*%d=%d\n", a, b, a * b);
        break;
    case ('/'):
        printf("%d/%d=%d\n", a, b, a / b);
        break;
    default:
        printf("ERROR");
        break;
    }
}