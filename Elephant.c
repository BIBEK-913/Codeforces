#include <stdio.h>
int main()
{
    int step = 0, x, c = 0;
    scanf("%d", &x);
    while (x - step > 0)
    {
        step += 5;
        c++;
    }
    printf("%d", c);
    return 0;
}