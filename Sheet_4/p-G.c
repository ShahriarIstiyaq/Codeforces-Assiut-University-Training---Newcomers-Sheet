// Conversion.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100000];

    gets(s); // Input.

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == ',')
            printf(" ");
        else if (s[i] >= 'a' && s[i] <= 'z')
            printf("%c", s[i] - 32);

        else if (s[i] >= 'A' && s[i] <= 'Z')
            printf("%c", tolower(s[i]));
    }

    return 0;
}