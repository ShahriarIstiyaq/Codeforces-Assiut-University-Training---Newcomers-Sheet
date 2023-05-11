// Lucky Array
#include <stdio.h>

int main()
{
    int n, a[100000], min, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
            count++;
    }

    if (count % 2 == 0)
        printf("Unlucky");

    else
        printf("Lucky");

    return 0;
}