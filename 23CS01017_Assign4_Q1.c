#include <stdio.h>
int main()
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    switch (n % 2)
    {
    case 1:
        printf("%d is ODD!", n);
        break;
    default:
        printf("%d is EVEN!", n);
    }
    return 0;
}