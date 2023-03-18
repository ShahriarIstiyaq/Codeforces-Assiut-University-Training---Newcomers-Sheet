#include <stdio.h>

int main()
{
    system("cls");
    int n, x, add = 0;
    scanf("%d", &n);

    int c = n;

    while (n > 0)
    {
        x = n % 10;
        add = x + (add * 10);
        n = n / 10;
    }

    if (c == add)
    {
        printf("%d\nYES", add);
    }
    else
    {
        printf("%d\nNO", add);
    }

    return 0;
}