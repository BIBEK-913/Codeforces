#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, x, y, i, j, x1, y1;
    int *arrout;
    int **arrout2;
    scanf("%d", &t);
    arrout = (int *)malloc(t * 4);
    arrout2 = (int **)malloc(2 * 2 * t * sizeof(int));
    for (i = 0; i < t; i++)
    {
        arrout2[i] = (int *)malloc(2 * sizeof(int));
    }
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        if ((x != 0 && y != 0) && (x % y != 0 || y % x != 0))
        {
            arrout[i] = 1;
            arrout2[i][0] = x;
            arrout2[i][1] = y;
            // printf("%d\n", arrout[i]);
            // printf("%d %d\n", arrout2[i][0], arrout2[i][1]);
        }
        else if (y == 0)
        {
            arrout[i] = 2;
            arrout2[i][0] = x;
            arrout2[i][1] = y + 1;
            arrout2[i + 1][0] = x;
            arrout2[i + 1][1] = y;
            // printf("%d\n", arrout[i]);
            // printf("%d %d\n", arrout2[i][0], arrout2[i][1]);
            // printf("%d %d\n", arrout2[i + 1][0], arrout2[i + 1][1]);
        }
        else if (x == 0)
        {
            arrout[i] = 2;
            arrout2[i][0] = x + 1;
            arrout2[i][1] = y;
            arrout2[i + 1][0] = x;
            arrout2[i + 1][1] = y;
            // printf("%d\n", arrout[i]);
            // printf("%d %d\n", arrout2[i][0], arrout2[i][1]);
            // printf("%d %d\n", arrout2[i + 1][0], arrout2[i + 1][1]);
        }
        else if ((x - 1) % y != 0 || y % (x - 1) != 0)
        {
            arrout[i] = 2;
            arrout2[i][0] = x - 1;
            arrout2[i][1] = y;
            arrout2[i + 1][0] = x;
            arrout2[i + 1][1] = y;
            // printf("%d\n", arrout[i]);
            // printf("%d %d\n", arrout2[i][0], arrout2[i][1]);
            // printf("%d %d\n", arrout2[i + 1][0], arrout2[i + 1][1]);
        }
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", arrout[i]);
        for (int j = 0; j < arrout[i]; j++)
        {
            printf("%d %d\n", arrout2[i][0], arrout2[i][1]);
        }
    }
    free(arrout);
    free(arrout2);
    return 0;
}
