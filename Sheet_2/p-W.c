#include <stdio.h>

int main()
{
    int n, space, start, end;
    scanf("%d", &n);

    // here number of rows 2n.
    // number of colums (2n-1).

    space = n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= 4)
        {
            for (int j = space; j >= 0; j--)
            {
                printf("_");
            }

            space--;
            start = n - (i - 1);
            end = n + (i - 1);

            for (int k = start; k <= end; k++)
            {
                printf("*");
            }
        }

        else if (i >= 5)
        {

            start = n - (i - 1);
            end = n + (i - 1);
            space = 0;
            int t = start;
            start = end;
            end = t;

            for (int j = space; j >= 3; j++)
            {
                printf("_");
            }

            space++;

            for (int k = end; k >= start; k--)
            {
                printf("*");
            }
        }

        printf("\n");
    }
    return 0;
}
