// Good or Bad
#include <stdio.h>
#include <string.h>

int main()
{
    int T, f;
    char s[100000];

    scanf("%d\n", &T);

    for (int t = 1; t <= T; t++)
    {
        f = 0;
        gets(s);

        for (int i = 0; i < strlen(s); i++)
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' || s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
                f = 1;

        if (f == 1)
            printf("Good\n");

        else
            printf("Bad\n");
    }
}