// Palindrom Array.
#include <stdio.h>

int main()
{
    int n, a1[100000], a2[100000], f = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
        a2[n - 1 - i] = a1[i];
    }

    for (int i = 0; i < n; i++)
        if (a1[i] == a2[i])
            f++;

    if (f == n)
        printf("YES");

    else
        printf("NO");

    getchar();
    return 0;
}