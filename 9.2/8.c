#include <stdio.h>
#include <stdbool.h>
int main() {
    system("clear");   
    char a;
    printf("Enter char: \t");
    scanf("%c", &a);
    switch (a) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Not a vowel");
    }
    }