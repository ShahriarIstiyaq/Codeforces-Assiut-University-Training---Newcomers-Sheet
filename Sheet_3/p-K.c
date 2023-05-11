// Sum Digits.
#include <stdio.h>

int main()
{
    int n, sum = 0, a[1000000], digit;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%1d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}