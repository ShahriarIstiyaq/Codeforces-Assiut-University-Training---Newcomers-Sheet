#include <stdio.h>

int main()
{
    int n, space, start, end;
    scanf("%d", &n);

    // Here n is the number of rows.
    // The number of colums is (2n - 1).
    space = n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = space; j >= 0; j--)
        {
            printf(" ");
        }

        space--;
        start = n - (i - 1);
        end = n + (i - 1);

        for (int k = start; k <= end; k++)
        {
            if (k == 0)
            {
                goto L1;
            }
            printf("*");
        }
        printf("\n");
    }
L1:
    return 0;
}