// PENDING taken from reply codechallenges teen edition 2022 Problem A
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, m, p, j, i, pmax = 0, c = 0, count = 0;
    int pmaxarr[1000000];
    int *parr;
    FILE *ptr, *out;
    ptr = fopen("metinput.txt", "r");
    fscanf(ptr, "%d", &t);
    for (int k = 0; k < t; k++)
    {
        fscanf(ptr, "%d %d", &n, &m);
        parr = (int *)malloc(n * 4);
        for (j = 0; j < n; j++)
        {
            fscanf(ptr, "%d", &p);
            parr[j] = p;
            if (p > pmax)
                pmax = p;
        }
        printf("%d", p);
        for (i = 0; i < (m / pmax) + m % pmax; i++)
        {
            if (i == 0)
                pmaxarr[i] = 1;
            else
                pmaxarr[i] = pmaxarr[i - 1] + pmax;
        }
        for (i = 0; i < (m / pmax) + m % pmax; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (pmaxarr[i] % parr[j] == 1 && parr[j] != pmax)
                    c++;
            }
            if (c == n - 1)
                count++;
        }
        if (k == 0)
        {
            out = fopen("output.txt", "w");
            fprintf(out, "Case #%d: %d\n", k + 1, count);
        }
        else
        {
            fclose(out);
            out = fopen("output.txt", "a");
            fprintf(out, "Case #%d: %d\n", k + 1, count);
        }
    }
    fclose(ptr);
    if (out != NULL)
        fclose(out);
    return 0;
}