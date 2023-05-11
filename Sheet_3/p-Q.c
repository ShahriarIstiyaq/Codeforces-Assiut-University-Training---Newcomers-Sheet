// Count Subarray.
#include <stdio.h>

int main()
{
    int n, x, a[1000], cnt = 0, t, min, max;

    scanf("%d", &t);

    for (int w = 1; w <= t; w++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (x = 1; x <= n; x++) // Here x determines the size of the subarray.
        {
            for (int i = 0; i <= (n - x); i++)
            {

                min = a[i];
                for (int j = i; j < (i + x); j++) // Actuall subarrays.
                {
                    if(min <= a[j])
                    {
                        min = a[j];
                        cnt++;
                    }
                }
                printf("\n");
            }
        }

        printf("%d", cnt);
        cnt = 0;
    }
    return 0;
}