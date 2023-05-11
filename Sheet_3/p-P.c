// Minimize number.
#include <stdio.h>

int main()
{
    int n, a[210], cnt = 0, f = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (a[0] % 2 == 0)
    {
        f = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
                f++;
            }

            if (f == n)
                cnt++;
        }
    }

    printf("%d ", cnt);

    return 0;
}