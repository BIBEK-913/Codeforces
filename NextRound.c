#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k, i, passed = 0;
    int *arr;
    scanf("%d %d", &n, &k);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] != 0 && (i <= k - 1 || arr[i] == arr[k - 1]))
            passed++;
    }
    printf("%d", passed);
    free(arr);
    return 0;
}