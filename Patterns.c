#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = i; j <= i + 4; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}