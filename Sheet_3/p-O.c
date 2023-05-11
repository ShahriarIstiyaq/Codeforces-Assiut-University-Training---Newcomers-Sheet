// Fibonacci.
#include <stdio.h>

int main()
{
    long long int n, fib[60];
    scanf("%lld", &n);

    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i < 51; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%lld\n", fib[n]);

    return 0;
}