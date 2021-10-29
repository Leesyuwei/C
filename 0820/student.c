#include <stdio.h>

void main()
{
    int age;
    double score;
    char lvl;
    printf("\n年級\t得分\t等級\n");
    printf("%d\t%.2f\t%c\n", age, score, lvl);

    age = 5;
    score = 80.5;
    lvl = 'C';
    printf("\n年級\t得分\t等級\n");
    printf("%d\t%.2f\t%c\n", age, score, lvl);
}