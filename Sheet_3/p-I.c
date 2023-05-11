// Smallest Pair.
#include <stdio.h>

int main()
{
    long long int t, n, a[100000], min = 1000000000, sum;
    scanf("%lld", &t);

    while (t--)
    {
        scanf("%lld", &n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                sum = a[i - 1] + a[j - 1] + j - i;

                if (sum < min)
                    min = sum;
            }
        }
        printf("%lld\n", min);
        min = 1000000000;
    }

    return 0;
}