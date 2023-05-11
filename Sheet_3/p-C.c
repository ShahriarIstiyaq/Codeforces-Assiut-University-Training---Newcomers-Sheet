// Replacement.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            printf("0 ");

        else if (a[i] > 0)
            printf("1 ");

        else if (a[i] < 0)
            printf("2 ");
    }
    return 0;
}