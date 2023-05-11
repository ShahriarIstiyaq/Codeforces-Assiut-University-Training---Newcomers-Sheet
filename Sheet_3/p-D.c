// Position in array.
#include <stdio.h>

int main()
{
    int n, a[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 10)
            printf("A[%d] = %d\n", i, a[i]);
    }

    getchar();
    return 0;
}