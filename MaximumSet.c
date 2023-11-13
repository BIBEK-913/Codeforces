// PENDING
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, l, r, i, j, size = 0, max, num = 0, k;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        scanf("%d %d", &l, &r);
        for (i = l; i <= r; i++)
        {
            for (j = 1; i * j <= r; j++)
            {
                if (j == 1)
                {
                    size++;
                    num++;
                }
                else if ((i * j) % (i * (j - 1)) == 0)
                {
                    size++;
                    num++;
                }
            }
            if (i == l)
                max = size;
            if (i > l && size > max)
                max = size;
                size=0;
        }
        int arr[2] = {max, num};
        for (int q = 0; q < 2; q++)
        {
            printf("%d\n", arr[q]);
        }
    }

    return 0;
}
