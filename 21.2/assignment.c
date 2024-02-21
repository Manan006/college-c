#include <stdio.h>

int main()
{
    system("clear");
    int a, b;

    printf("Enter no: \t");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Maximum is :\t%d (first)", a);
    }
    else if (b > a)
    {
        printf("Maximum is :\t%d (second)", b);
    }
    else
    {
        printf("Both are equal");
    }
}