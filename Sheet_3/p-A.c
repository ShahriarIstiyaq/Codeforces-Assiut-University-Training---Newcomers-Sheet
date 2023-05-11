// Summation.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[100000];
    long long sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("%lld", abs(sum));
    return 0;
}