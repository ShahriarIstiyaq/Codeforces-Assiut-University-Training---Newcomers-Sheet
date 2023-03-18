#include<stdio.h>

int main()
{
    int n,x, digit;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        while(1)
        {
            digit = x % 10;
            printf("%d ", digit);
            x = x / 10;

            if(x == 0)
            {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}