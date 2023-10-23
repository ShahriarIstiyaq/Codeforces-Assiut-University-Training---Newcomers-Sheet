// MAX and MIN
#include <stdio.h>
int maxNumber(int arr[1010], int num_of_element)
{
    int max = -1000000000;
    for (int i = 1; i <= num_of_element; i++)
        if (max < arr[i])
            max = arr[i];

    return max;
}

int minNumber(int arr[1010], int num_of_element)
{
    int min = 1000000000;
    for (int i = 1; i <= num_of_element; i++)
        if (min > arr[i])
            min = arr[i];

    return min;
}

int main()
{
    int a[1010], n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    int max = maxNumber(a, n);
    int min = minNumber(a, n);

    printf("%d %d", min, max);

    return 0;
}