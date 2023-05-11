// Sorting.
#include <stdio.h>

int main()
{
    int n, a[10000], min[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        min[i] = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min[i])
            {
                // swaping, so that the same numbers don't appare in different postition.
                int swap = a[j];
                a[j] = min[i];
                min[i] = swap;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", min[i]);

    return 0;
}