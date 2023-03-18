//Sum of Consecutive Odd Numbers.
#include<stdio.h>

int main()
{
    int n, a, b, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d%d", &a, &b);

        if(b<a)
        {
            int t = a;
            a = b;
            b = t;
        }

        a++;
        for (int j = a; j < b; j++)
        {
            if(j % 2 != 0)
            {
                sum += j;
            }
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}