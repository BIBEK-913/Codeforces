// PENDING
#include <stdio.h>
int main()
{
    int t, l, r, i, j, k, c, max = 0, min = 0, d,luck;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &r, &l);
        for (j = r; j <= l; j++)
        {
            while (j > 0)
            {
                d = j % 10;
                if (d > max)
                    max = d;
                if (d < min)
                    min = d;
                d /= 10;
            }
            luck = max - min;
            printf("%d", luck);
        }
    }
    return 0;
}
