// Way Too Long Words
#include <stdio.h>
#include <string.h>

int main()
{
    char s[110];
    int T, cnt = 0;

    scanf("%d\n", &T); // Test case.
    // printf("%d", T);

    for (int t = 1; t <= T; t++)
    {
        cnt = 0;

        gets(s); // String input.

        int limit = strlen(s); // For last character.

        for (int i = 1; s[i] != '\0'; i++)
            cnt++; // Counting total character.

        if (cnt <= 10)
            printf("%s\n", s);

        else
        {
            int num = cnt - 1; // Minimizing 2 for first and last charecter, \0 is not included in "cnt".

            printf("%c%d%c\n", s[0], num, s[limit - 1]);
        }
    }

    return 0;
}