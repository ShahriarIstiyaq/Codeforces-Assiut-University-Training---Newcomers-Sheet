#include <stdio.h>
#include <math.h>

int main()
{
    int t, n, cnt = 0, bi, x;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        while (n > 0)
        {
            bi = n % 2;
            n = n / 2;

            if (bi == 1)
            {
                cnt++;
            }
        }

        x = pow(2, cnt) - 1;
        printf("%d\n", x);
        x = 0;
        cnt = 0;
    }
    return 0;
}
