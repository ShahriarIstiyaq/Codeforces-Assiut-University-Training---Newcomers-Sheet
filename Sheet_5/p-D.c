// Prime Function.
#include <stdio.h>
#include <math.h>

void checkPrime(int num)
{
    int f = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            f = 1;
            break;
        }
    }

    if (f == 0 && num != 1)
        printf("YES\n");

    else
        printf("NO\n");
}

int main()
{
    int num_of_test, num;
    scanf("%d", &num_of_test);

    for (int i = 1; i <= num_of_test; i++)
    {
        scanf("%d", &num);
        checkPrime(num);
    }

    return 0;
}