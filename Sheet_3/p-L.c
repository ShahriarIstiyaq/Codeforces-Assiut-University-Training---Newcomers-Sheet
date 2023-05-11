// Max Subarray.
#include <stdio.h>

int main()
{
    int n, x, a[1000], max = -1000000000, t;
    scanf("%d", &t); // Test case.

    for (int tc = 0; tc < t; tc++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (x = 1; x <= n; x++) // Here x helps to determines the size of the subarray and total how many subarrays can be generated.
        {
            for (int i = 0; i <= (n - x); i++) // Size of the subarrays.
            {
                max = a[i];
                for (int j = i; j < (i + x); j++) // Actuall subarrays.
                {
                    if (max < a[j])
                        max = a[j];
                }
                printf("%d ", max);
            }
        }

        printf("\n");
    }
    return 0;
}
