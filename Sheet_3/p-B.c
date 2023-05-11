// Searching.
#include <stdio.h>

int main()
{

    int n, x, arr[100000], f = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            f = 1;

            printf("%d\n", i);
            break;
        }
    }

    if (f == 0)
        printf("-1\n");

    return 0;
}