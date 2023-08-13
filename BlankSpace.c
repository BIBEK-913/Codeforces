#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, i, j, k = 0, len = 0, c = 0, max = 0;
    int *arrin, *arrmax, *arrout;
    scanf("%d", &t);
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        c = 0;
        arrin = (int *)malloc(n * 4);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arrin[j]);
            if (arrin[j] == 0)
                c++;
        }
        if (c != 0)
        {
            arrmax = (int *)malloc(c * 4);
            for (j = 0; j < n; j++)
            {
                if (arrin[j] == 0 && (j == 0 || arrin[j - 1] == 1))
                    len = 1;
                if (arrin[j] == 0 && arrin[j - 1] == 0)
                    len++;
                if (arrin[j] == 0 && (arrin[j + 1] == 1 || j == n - 1))
                {
                    arrmax[k] = len;
                    k++;
                    len = 0;
                }
            }
            max = arrmax[0];
            for (int m = 0; m < k; m++)
            {
                if (arrmax[m] > max)
                    max = arrmax[m];
            }
        }
        if (c == 0)
            arrout[i] = 0;
        else
            arrout[i] = max;
        k = 0;
        len = 0;
        free(arrin);
        free(arrmax);
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", arrout[i]);
    }
    free(arrout);
    return 0;
}