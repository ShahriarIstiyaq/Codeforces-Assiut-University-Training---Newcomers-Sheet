// Count letters.
#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0, f;
    char s[10000010];

    gets(s);

    for (int i = 0; i < 26; i++)
    {
        cnt = 0;
        char temp = 'a' + i;

        // printf("%c\n", temp);
        int limit = strlen(s);

        for (int j = 0; j < limit; j++)
            if (s[j] == temp)
                cnt++;

        if (cnt > 0)
            printf("%c : %d\n", temp, cnt);
    }

    return 0;
}