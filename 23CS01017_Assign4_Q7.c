#include <stdio.h>
int main()
{
    int age, cost;
    printf("Enter the Age: ");
    scanf("%d", &age);

    if (age < 5)
        cost = 0;
    else if (age < 12 && age >= 5)
        cost = 20;
    else if (age < 59 && age >= 13)
        cost = 50;
    else
        cost = 50 * 0.8;
    printf("%d", cost);
    return 0;
}