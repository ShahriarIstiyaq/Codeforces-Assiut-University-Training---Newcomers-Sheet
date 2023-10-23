// New Array.
#include <stdio.h>
int c[2020];
int size;
void newArray(int num_of_element, int arr1[1010], int arr2[1010])
{
    size = num_of_element * num_of_element;

    for (int i = 1; i <= num_of_element; i++)
    {
        c[i] = arr1[i];
    }

    for (int i = num_of_element + 1; i <= size; i++)
    {
        c[i] = arr2[i];
    }
}

int main()
{
    int n, a[1010], b[1010];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= n; i++)
        scanf("%d", &b[i]);

    newArray(n, b, a);


    for (int i = 1; i <= size; i++)
         printf("%d ", c[i]);
}
