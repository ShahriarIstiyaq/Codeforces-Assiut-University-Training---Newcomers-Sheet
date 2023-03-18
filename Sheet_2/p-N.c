#include<stdio.h>

int main()
{
    int n,x;
    char s;
    scanf("%c", &s);
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        for (int j = 1; j <= x; j++)
        {
            printf("%c", s);
        }
        
        printf("\n");
    }

    return 0;
}