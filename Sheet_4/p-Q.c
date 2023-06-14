// Q - Reverse words.
#include <stdio.h>
#include <string.h>

void rev_Words(char *str)
{
    int len = strlen(str), start = 0, end;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                // swaping.
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main()
{
    char s[1000010];

    gets(s);
    rev_Words(s);

    printf("%s", s);
    return 0;
}
