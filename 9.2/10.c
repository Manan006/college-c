#include <stdio.h>

int max(int num1, int num2);


int main() {
    system("clear");   
    int a;

    printf("1.) Sum of two inputted numbers\n2.) Product of three inputted numbers\n3.) Check whether inputted number even or odd.\n4.) Find maximum between three numbers.\nEnter Operation ID: \t");
    scanf("%d", &a);
    switch (a) {
        case 1:
            int a1, a2;
            printf("Enter no: \t");
            scanf("%d %d", &a1, &a2);
            printf("Answer:\t%d", a1+a2);
            break;
        case 2:
            int b1, b2, b3;
            printf("Enter no: \t");
            scanf("%d %d %d", &b1, &b2, &b3);
            printf("Answer:\t%d", b1*b2*b3);
            break;
        case 3:
            int c;
            printf("Enter no: \t");
            scanf("%d", &c);
            if (c % 2){
                printf("Answer:\tOdd");
            }
            else {
                printf("Answer:\tEven");}
            break;
        case 4:
            int d1, d2, d3, max_2, max_;
            printf("Enter no: \t");
            scanf("%d %d %d", &d1, &d2, &d3);
            max_2 = max(d1, d2);
            max_ = max(max_2, d3);
            printf("Answer:\t%d", max_);
            break;
        default:
            printf("Unknown Option");
    }
    }
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}