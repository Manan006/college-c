#include <stdio.h>

int main()
{
    system("clear");
    int a;

    printf("Enter no: \t");
    scanf("%d", &a);
    if (a >= 80 && a <= 100)
    {
        printf("Distinction");
    }
    else if (a >= 60)
    {
        printf("First Distinction");
    }
    else if (a >= 50)
    {
        printf("Second Distinction");
    }
    else if (a >= 40)
    {
        printf("Third Distinction");
    }
    else
    {
        printf("Fail");
    }
}
