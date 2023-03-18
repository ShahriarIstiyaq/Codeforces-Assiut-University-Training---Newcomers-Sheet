#include<stdio.h>

int main()
{
    int n, a, b, digit, add = 0, sum = 0, x;
    scanf("%d%d%d", &n, &a, &b);

    if(a>b)
    {
        int r = a;
        a = b;
        b = r;
    }

    for(int i = 1; i <= n; i++)
    {
        x = i;
        if(x<=9)
        {
            if(a <= x && x <= b)
            {
                sum += x;
            }
        }

        else if(x >= 10)
        {
        while (1)
        {
            digit = x % 10;
            x = x / 10;
            add += digit;

            if(x == 0)
            {
                break;
            }
        }

        if(a <= add && add <= b)
        {
            sum += i;
        }
        }
        add = 0;
    }

    printf("%d\n", sum);
    return 0;
}