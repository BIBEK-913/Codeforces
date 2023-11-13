#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, m, i, j, c = 0, x1, y1, x2, y2;
    scanf("%d", &t);
    int *arrout;
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 - 1 >= 1)
            c++;
        if (x1 + 1 <= n)
            c++;
        if (y1 - 1 >= 1)
            c++;
        if (y1 + 1 <= m)
            c++;
        arrout[i] = c;
        c = 0;
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", arrout[i]);
    }
    free(arrout);
    return 0;
}
