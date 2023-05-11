// Replace MinMax.
#include <stdio.h>

int main()
{
    int n, a[10000], max = -1000000000, min = 1000000000;
    int min_pos, max_pos;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_pos = i;
        }

        for (int j = 0; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                max_pos = j;
            }
        }
    }

    int rp = a[min_pos];
    a[min_pos] = a[max_pos];
    a[max_pos] = rp;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
