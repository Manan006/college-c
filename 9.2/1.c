#include <stdio.h>

int main() {
    system("clear");   
    int a, b, c;

    printf("Enter no: \t");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a:%d\tb:%d", a, b);
    }
