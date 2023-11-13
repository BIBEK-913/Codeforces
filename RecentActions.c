#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, no_ofposts, no_ofrecentact, j, i, k, temp;
    int *initial, *back;
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
    {
        scanf("%d %d", &no_ofposts, &no_ofrecentact);
        initial = (int *)malloc(no_ofposts * 4);
        back = (int *)malloc((no_ofrecentact + 1) * 4);
        for (k = 0; k < no_ofposts; k++)
        {
            initial[k] = k + 1;
        }
        for (i = 1; i <= no_ofrecentact; i++)
        {
            scanf("%d", &back[i]);
        }
        i = 0;
        for (k = no_ofposts; k >= no_ofposts; k--)
        {
            temp = back[i];
        }
    }

    return 0;
}
