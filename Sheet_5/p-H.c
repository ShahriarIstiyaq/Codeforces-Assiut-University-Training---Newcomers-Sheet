// N Times.
#include <stdio.h>

void charPrint(int num, char character)
{
    for (int i = 1; i <= num; i++)
        printf("%c ", character);
}

int main()
{
    int n, T;
    char ch;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d %c", &n, &ch);
        charPrint(n, ch);
        printf("\n");
    }

    return 0;
}