#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t, i, j;
    int *arrout;
    char s[61];
    scanf("%d", &t);
    getchar();
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        gets(s);
        for (j = 1; j < strlen(s); j++)
        {
            if (s[j] != s[j - 1])
                break;
        }
        arrout[i] = strlen(s) - 1;
        if (j == strlen(s))
            arrout[i] = -1;
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", arrout[i]);
    }
    free(arrout);
    return 0;
}