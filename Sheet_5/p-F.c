// Equation.
#include <stdio.h>
#include <math.h>

long long int valueOfEquation(long long int num, long long int power)
{
    long long int ans = 0, temp;
    for (int i = 2; i <= power; i += 2)
    {
        temp = 1;
        for (int j = 1; j <= i; j++)
        {
            temp *= num;
        }
        ans += temp;

        // printf("t = %d\n", temp);
        // printf("ans = %d\n", ans);
    }

    return ans;
}

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);

    long long int result = valueOfEquation(x, n);
    printf("%lld", result);
    return 0;
}