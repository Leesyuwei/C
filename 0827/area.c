#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    double f, c;

    printf("請輸入華氏溫度:");
    scanf("%lf", &f);

    // f = (9 / 5.0) * c + 32;
    c = (f - 32) * (5.0 / 9);

    printf("攝氏%.2f度=華氏%.2f度\n", c, f);
}