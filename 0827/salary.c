#include <stdio.h>
#include <stdlib.h>

void main()
{
    int hr;
    double sal;
    printf("Enter hr:");
    scanf("%d", &hr);
    if (hr <= 60)
    {
        sal = 75 * hr;
    }
    else if (hr <= 75)
    {
        sal = (75 * 60) + (hr - 60) * (75 * 1.25);
    }
    else
    {
        sal = (75 * 60) + (75 * 15 * 1.25) + (hr - 75) * (75 * 1.75);
    }
    printf("\nSalary:%.2lf", sal);
}
