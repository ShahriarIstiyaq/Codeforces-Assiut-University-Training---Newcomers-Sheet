// Palindrome
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1010], r[1010];
    gets(s);
    int x = strlen(s); // Length.

    for (int i = 0; i < x; i++)
        r[x - i - 1] = s[i];

    r[x] = '\0';

    int f = strcmp(s, r);

    if (f == 0)
        printf("YES");

    else
        printf("NO");
    return 0;
}