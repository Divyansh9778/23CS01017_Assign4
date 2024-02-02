#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    if (n > 100 && n < 999)
    {
        int a = n / 100;
        int b = (n - a * 100) / 10;
        int c = (n - a * 100) - b * 10;
        // printf("%d\n", a);
        // printf("%d\n", b);
        // printf("%d\n", c);

        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == n)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("Incorrect Input");
    return 0;
}