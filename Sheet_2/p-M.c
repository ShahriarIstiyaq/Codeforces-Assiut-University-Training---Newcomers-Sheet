#include<stdio.h>

int main()
{
    int a, b, digit;
    scanf("%d%d", &a, &b);

    if(a<b)
    {
        int t = a;
        a = b;
        b = t;
    }

    for(int i = b; i <= a; i++)
    {
        if( i == 4 || i == 7)
        {
            printf("%d", i);
        }

        else if( i >= 10)
        {
            digit = i % 10;
            i = i / 10;

            if(digit != 4 && digit != 7)
            {
                break;
            }
        }

        if(digit == 4 || digit == 7)
        {
            printf("%d", i);
        }

        else
        {
            printf("-1\n");
        }
    }

    return 0;
}