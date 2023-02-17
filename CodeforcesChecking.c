#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t, i;
    char test[27];
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%c", &test[i]);
    }
    for (i = 1; i <= t; i++)
    {
        if (test[i] == 'c' || test[i] == 'o' || test[i] == 'd' || test[i] == 'e' || test[i] == 'f' || test[i] == 'r' || test[i] == 's')
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}