// Is B a subsequence of A ?
//  Printing Subarray.
#include <stdio.h>

int main()
{
    int n, m, a[10010], b[1010], x, cnt = 0, f = 0;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (x = 1; x <= n; x++) // Here x determines the size of the subarray.
    {
        for (int i = 0; i <= (n - x); i++) // i determines how many same size sub-arrays are there.
        {
            for (int j = i; j < (i + x); j++) // j prints actuall elements of the sub-array.
            {
                cnt = 0;
                printf("%d ", a[j]);
                for (int k = 0; k <= m; k++)
                {
                    if (a[j] == b[k])
                        cnt++;
                }

                if (cnt == i)
                {
                    f = 1;
                }
            }
            printf("\n");
        }
    }

    if (f = 1)
        printf("YES");

    else
        printf("NO");

    return 0;
}
