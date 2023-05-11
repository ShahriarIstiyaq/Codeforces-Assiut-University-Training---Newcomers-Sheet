// Lowest Number.
#include <stdio.h>

int main()
{
    int n, a[100000], min, pos = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = 1000000000;

    for (int i = 0; i < n; i++)

        if (a[i] < min)
        {
            min = a[i];
            pos = i + 1;
        }

    printf("%d %d\n", min, pos);

    getchar();
    return 0;
}