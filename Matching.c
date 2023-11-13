// PENDING; STRING INPUT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t, count = 1, i, j, k;
    char arrin[5];
    int *arrout;
    scanf("%d", &t);
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        do
        {
            scanf("%c", &arrin[k]);
        }
            while (arrin[k] != ' ');

        for (j = 0; j < strlen(arrin); j++)
        {
            if (arrin[j] == '0' && j == 0)
                count = 0;
            if (arrin[j] == '?' && j == 0)
                count = 9;
            if (arrin[j] == '?' && j != 0)
                count *= 10;
        }
        arrout[i] = count;
        count = 1;
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", arrout[i]);
    }
    free(arrout);
    return 0;
}
