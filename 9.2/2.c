#include <stdio.h>

int main() {
    system("clear");   
    int a, b;

    printf("Enter no: \t");
    scanf("%d %d", &a, &b);
    a += b;
    b = a - b;
    a = a - b ;
    printf("a:%d\tb:%d", a, b);
    }
