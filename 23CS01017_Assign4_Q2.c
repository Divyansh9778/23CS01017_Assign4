#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 nos: ");
    scanf("%d%d%d", &a, &b, &c);

    switch (a > b && b > c)
    {
    case 1:
        printf("%d", a);
        break;
    case 0:
        switch (a < b && b > c)
        {
        case 1:
            printf("%d", b);
            break;
        case 0:
            switch (a < b && b < c)
            {
            case 1:
                printf("%d", c);
                break;
            case 0:
                switch (a > c)
                {
                case 1:
                    printf("%d", a);
                    break;
                case 0:
                    printf("%d", c);
                }
            }
        }
    }
    return 0;
}