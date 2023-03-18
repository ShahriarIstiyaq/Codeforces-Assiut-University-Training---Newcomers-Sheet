#include <stdio.h>

int main()
{
    int n;
    long long int x, fec = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &x);
        for (int j = 1; j <= x; j++)
        {
            fec = fec * j;
        }

        if (x == 0)
        {
            fec = 1;
        }
        printf("%lld\n", fec);
        fec = 1;
    }

    return 0;
}