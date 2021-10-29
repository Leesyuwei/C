#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 0, b = 1, n = 0;
    printf("1+..+n n=");
    scanf("%d", &n);
calculate:
    if (b <= n)
    {
        a += b;
        b++;
        goto calculate;
    }
    printf("1+..+%d = %d", n, a);
}
