#include <stdio.h>
#include <string.h>

void main()
{
    char text[] = {'h', 'e', 'l', 'l', 'o'};
    printf("%s\n", text);
    char text1[] = "hello";
    printf("%s\n", text1);
    printf("text:%d\n", strlen(text));
    printf("text1:%d\n", strlen(text1));
}