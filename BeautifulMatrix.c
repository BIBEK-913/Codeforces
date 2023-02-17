#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat[6][6], i, j, k, l, c;
    for (i = 1; i <= 5; i++)
    {
        printf("\n");
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 1)
            {
                k = i;
                l = j;
            }
        }
    }
    c = abs(3 - k);
    c += abs(3 - l);
    printf("%d", c);

    return 0;
}