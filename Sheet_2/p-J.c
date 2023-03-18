#include <stdio.h>

int main()
{
    int n, f1 = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f1 = 1;
            }
        }

        if (f1 == 0 || i == 2)
        {
            printf("%d ", i);
        }

        f1 = 0;
    }
    return 0;
}