#include<stdio.h>

int main()
{
    int a, b, sum = 0;
    
    while(1)
    {
        scanf("%d%d", &a, &b);

        if(b<a)
        {
            int t = a;
            a = b;
            b = t;
        }

        if(a <= 0)
        {
            break;
        }
        
        else
        {
            for (int i = a; i <= b; i++)
            {
                sum += i;
                printf ("%d ", i);
            }

            printf("sum =%d\n", sum);
        }

        sum = 0;
    }

    return 0;
}