#include <stdio.h>
int main()
{
    int a, b, n, c;
    printf("Enter the two nos: ");
    scanf("%d%d", &a, &b);
    printf("Function to perform: +(1) -(2) *(3) /(4): ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        printf("%f", (a / b) + ((a % b) * 1.0) / b);
    }
    return 0;
}