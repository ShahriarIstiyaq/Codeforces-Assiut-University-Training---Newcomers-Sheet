// Check Code.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, cnt_a = 0, cnt_b = 0;
    scanf("%d%d", &a, &b);
    int s = abs(a + b + 1);

    char arr[100];

    for (int i = 0; i <= s; i++)
        scanf("%c", &arr[i]);

    for (int i = 0; i <= s; i++)
        printf("%c ", arr[i]);

    for (int i = 0; i < s; i++)
    {

        if (arr[a] != '-')
        {
            goto L1;
            break;
        }

        if (i < a)
            cnt_a++;

        if (i > (a + 1) && i <= s)
            cnt_b++;
    }
    printf("%d %d", cnt_a, cnt_b);

    if (cnt_a == a && cnt_b == b)
        printf("Yes");

    else
    L1:
        printf("No");
    return 0;
}