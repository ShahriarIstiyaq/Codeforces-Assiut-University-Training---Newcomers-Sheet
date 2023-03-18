#include <stdio.h>

int main()
{
    int n, fib = 0, fir = 0, sec = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            fib = i;
        }

        else
        {
            fib = fir + sec;
            fir = sec;
            sec = fib;
        }

        printf("%d ", fib);
    }

    return 0;
}