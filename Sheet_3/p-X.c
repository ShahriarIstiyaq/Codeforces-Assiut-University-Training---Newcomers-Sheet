#include <stdio.h>
#include <string.h>
int n, m; // Global veriable.

int valid(int a, int b)
{
    if (a >= 1 && a <= n && b >= 1 && b <= m)
        return 1;

    else
        return 0;
}

int main()
{
    int x, y, f = 0;
    char s[110][110];
    // printf("Enter row and column numbers:");
    scanf("%d%d\n", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf(" %c", &s[i][j]);

    // printf("Enter Quary position:");
    scanf("%d%d", &x, &y);

    // printf("%c", s[x - 1][y - 1]);

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            // printf("i=%d , j =%d - %c\n", i, j, s[i][j]);
            if (i == x && j == y)
                continue;

            if (valid(i, j))
            {
                if (s[i][j] == '.')
                {
                    // printf("pos = %d %d\n", i, j);
                    f = 1;
                }
            }
        }
    }

    if (f == 1)
        printf("no");

    else
        printf("yes");
    return 0;
}