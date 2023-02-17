#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, i, n, j, lhs = 1, rhs = 1, cnt1 = 0, cnt2 = 0;
    int *ptr, *ptrk;
    scanf("%d", &t);
    ptrk = (int *)malloc(t * sizeof(int));
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ptr[j]);
        }
        for (j = 0; j <= n - 1; j++)
        {
            if (j == 0)
                lhs = ptr[j] * ptr[j];
            else
                lhs = lhs * ptr[j];
            for (j = j + 1; j < n; j++)
            {
                rhs = rhs * ptr[j];
            }
            if (lhs == rhs)
            {
                ptrk[cnt2] = j;
                cnt2++;
            }
            if (j == n - 1 && cnt2 == 0)
                ptrk[i] = -1;
            lhs = 1;
            rhs = 1;
        }
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", ptrk[i]);
    }

    return 0;
}
