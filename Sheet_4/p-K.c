// I love Strings.
#include <stdio.h>
#include <string.h>

int main()
{
    int n, limit;
    scanf("%d\n", &n);

    char s1[60], s2[60];

    for (int t = 1; t <= n; t++)
    {

        scanf("%s%s", s1, s2);

        int lim1 = strlen(s1);
        int lim2 = strlen(s2);

        if (lim1 >= lim2)
        {
            limit = lim2; // limit will the small one.

            for (int i = 0, j = 0; i < limit; i++, j++)
                printf("%c%c", s1[i], s2[i]);

            // adding the extra letters of S1 string with the current result, as this is the big one.
            for (int i = limit; i < lim1; i++)
                printf("%c", s1[i]);
        }

        else if (lim1 < lim2)
        {
            limit = lim1; // limit will the small one.

            for (int i = 0, j = 0; i < limit; i++, j++)
                printf("%c%c", s1[i], s2[i]);

            // adding the extra letters of S2 string with the current result, as this is the big one.
            for (int i = limit; i < lim2; i++)
                printf("%c", s2[i]);
        }
        printf("\n");
    }

    return 0;
}