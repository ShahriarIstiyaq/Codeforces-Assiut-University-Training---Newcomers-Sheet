// P- Count Words.

#include <stdio.h>
#include <string.h>

int main()
{
    int word_cnt = 0;
    char s[1000010];

    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'z')
        {
            if (!(s[i + 1] >= 'A' && s[i + 1] <= 'z'))
                word_cnt++;
        }

    printf("%d\n", word_cnt);
    return 0;
}