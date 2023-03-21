#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, i, j;
    int b = 0, m = 0;
    int *arrin, *arrout;
    scanf("%d", &t);
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        arrin = (int *)malloc(n * 4);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arrin[j]);
            if (arrin[j] % 2 == 0)
                m = m + arrin[j];
            else
                b = b + arrin[j];
        }
        if (m > b)
            arrout[i] = 1;
        else
            arrout[i] = 0;
        b = 0;
        m = 0;
    }
    free(arrin);
    for (i = 0; i < t; i++)
    {
        if (arrout[i] == 1)
            printf("\nYES");
        else
            printf("\nNO");
    }
    free(arrout);
    return 0;
}