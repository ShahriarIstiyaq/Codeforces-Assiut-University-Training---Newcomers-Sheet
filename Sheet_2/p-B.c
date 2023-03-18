#include<stdio.h>

int main()
{
    int n, f1=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
        printf("%d\n", i);
        f1=1;
        }
    }

    if(f1==0)
    {
        printf("-1\n");
    }

    return 0;
}
