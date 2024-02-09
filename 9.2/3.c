#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main() {
    system("clear");   
    int a, b, c, max_2, max_, min_2, min_;

    printf("Enter no: \t");
    scanf("%d %d %d", &a, &b, &c);
    max_2 = max(a, b);
    max_ = max(max_2, c);
    printf("Max:%d", max_);
    min_2 = min(a, b);
    min_ = min(min_2, c);
    printf("Min:%d", min_);
    }

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

/**
 * Find minimum between two numbers.
 */
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}