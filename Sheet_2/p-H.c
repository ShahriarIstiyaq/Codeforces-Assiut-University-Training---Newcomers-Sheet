#include<stdio.h>

int main()
{
    int n , f1=0;
    scanf("%d", &n);

    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            f1=1;
            break;
        }
    }

    if(f1==0 && n!=1)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }
    return 0;

}