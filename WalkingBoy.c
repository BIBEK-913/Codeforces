#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, j, i, c = 0;
    int *ptr, *output;
    scanf("%d", &t);
    output = (int *)malloc(t * sizeof(int));
    for (j = 0; j < t; j++)
    {
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
            if (i == 0 && n == 1)
                c = ptr[i] / 120 + (1440 - ptr[i] / 120);
            else if (i == 0)
                c += ptr[i] / 120;
            else if (i == 0 && n == 1)
                c = ptr[i] / 120 + (1440 - ptr[i] / 120);
            else if (i == n - 1 && 1440 - ptr[i] >= 120)
                c += (1440 - ptr[i]) / 120;
            else
                c += (ptr[i] - ptr[i - 1]) / 120;
        }
        if (c >= 2)
            output[j] = 1;
        else
            output[j] = 0;
        free(ptr);
        c = 0;
    }
    for (j = 0; j < t; j++)
    {
        if (output[j] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    free(output);

    return 0;
}
