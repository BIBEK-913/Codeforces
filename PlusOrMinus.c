#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, i, j;
    int arrin[3];
    char *arrout;
    scanf("%d", &t);
    arrout = (char *)malloc(t * sizeof(char));
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arrin[j]);
        }
        if (arrin[0] + arrin[1] == arrin[2])
            arrout[i] = '+';
        else
            arrout[i] = '-';
    }
    for (i = 0; i < t; i++)
    {
        printf("\n%c", arrout[i]);
    }
    return 0;
}