#include <stdio.h>

int main()
{
    system("clear");

    // da = dearest allowance
    // hra = house rent allowance
    // ta = travel allowance
    // additional TA (constant, irrespective of other stuff) depending on group of the employee
    int basic_pay, da, hra, ta, ta_constant, netpay;

    printf("Enter Basic Pay\t: ₹");
    scanf("%d", &basic_pay);

    printf("\nEnter DA\t: ");
    scanf("%d", &da);

    printf("\nEnter HRA\t: ");
    scanf("%d", &hra);

    printf("\nEnter TA\t: ");
    scanf("%d", &ta);

    printf("\nEnter TA Const\t: ₹");
    scanf("%d", &ta_constant);

    netpay = basic_pay + basic_pay * (da / 100) + basic_pay * (hra / 100) + ta_constant * (hra / 100);
    netpay = basic_pay + (basic_pay * da / 100) + (basic_pay * hra / 100) + ta_constant + (ta_constant * hra / 100);

    printf("\n#######################################");
    printf("\n\tNET PAY\t:\t₹%d", netpay);
    printf("\n#######################################");

    return 0;
}