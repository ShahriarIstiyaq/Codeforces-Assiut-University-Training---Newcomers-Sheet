#include<stdio.h>

int main()
{
    int a, b, max;
    scanf("%d%d", &a, &b);

    if(a<b)
    {
        int t = a;
        a = b;
        b = t;
    }

    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            max = i;
        }
    }

    printf("%d\n", max);

    return 0;
}