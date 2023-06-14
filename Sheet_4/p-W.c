// W - Encrypt & Decrypt Message.

#include <stdio.h>
#include <string.h>

int main()
{
    char key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char orginal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int len_key = strlen(key);
    int len_org = strlen(orginal);

    int q, index;
    char s[100010];

    scanf("%d\n", &q);

    gets(s);
    int in_len = strlen(s);

    if (q == 1)
    {
        for (int i = 0; i < in_len; i++)
        {
            for (int j = 0; j < len_org; j++)
            {
                if (s[i] == orginal[j])
                {
                    index = j;
                    break;
                }
            }
            printf("%c", key[index]);
        }
    }

    if (q == 2)
    {
        for (int i = 0; i < in_len; i++)
        {
            for (int j = 0; j < len_key; j++)
            {
                if (s[i] == key[j])
                {
                    index = j;
                    break;
                }
            }
            printf("%c", orginal[index]);
        }
    }

    return 0;
}