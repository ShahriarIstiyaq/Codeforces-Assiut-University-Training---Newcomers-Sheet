// Search in Matrix;
#include <stdio.h>

int main()
{
    int n, m, x, a[110][110], f = 0; // N is Row and M is Columns.
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == a[i][j])
            {
                f = 1;
                break;
            }
        }
    }

    if (f == 1)
        printf("will not take number");

    else
        printf("will take number");

    return 0;
}