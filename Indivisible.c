#include <stdio.h>
int main()
{
    int t, n, l, r, i, j, s;
    int *arrin, arrout;
    scanf("%d", &t);
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        s = ((1 + n) * n) / 2;
        if (s % n == 0)
        {
            arrout[i] = -1;
        }
        else
        {
        }
    }
    return 0;
}
