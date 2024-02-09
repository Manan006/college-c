#include <stdio.h>

int main() {
    system("clear");   
    int a, b, c, max_2, max_, min_2, min_;

    printf("Enter no: \t");
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b+c) % 2){
        printf("Old");
    }
    else {
        printf("Even");
    }
}