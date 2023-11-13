#include <stdio.h>
#include <stdlib.h>
int gcd(int, int);
int main()
{
    int t, n, j, i, a, b;
    int *ptr;
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
    {
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
            if (i >= 1)
            {
                b = ptr[i];
                a = ptr[i - 1];
            }
        }
    }
    return 0;
}