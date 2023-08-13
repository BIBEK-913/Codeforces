#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, c = 0, t;
    int *arrout;
    char s[11];
    scanf("%d", &t);
    getchar();
    arrout = (int *)malloc(t * 4);
    for (i = 0; i < t; i++)
    {
        gets(s);
        if (s[0] != 'c')
            c++;
        if (s[1] != 'o')
            c++;
        if (s[2] != 'd')
            c++;
        if (s[3] != 'e')
            c++;
        if (s[4] != 'f')
            c++;
        if (s[5] != 'o')
            c++;
        if (s[6] != 'r')
            c++;
        if (s[7] != 'c')
            c++;
        if (s[8] != 'e')
            c++;
        if (s[9] != 's')
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