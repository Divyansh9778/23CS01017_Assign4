#include <stdio.h>
int main()
{
    double c_s, c_b;
    float in;
    printf("Enter the credit score and current balance: ");
    scanf("%lf%lf", &c_s, &c_b);

    if (c_s < 600)
        in = 0.15;
    else if (c_s >= 600 && c_s < 750)
        in = 0.12;
    else if (c_s >= 750)
        in = 0.10;
    double cal = in * c_b;
    printf("%lf", cal);
    return 0;
}