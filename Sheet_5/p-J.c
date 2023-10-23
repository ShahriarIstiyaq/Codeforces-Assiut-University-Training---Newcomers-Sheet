// Average
#include <stdio.h>

double avg(double arr[10010], int num_of_element)
{
    double sum = 0;
    for (int i = 1; i <= num_of_element; i++)
        sum += arr[i];

    double Average = sum / (double)num_of_element;

    return Average;
}

int main()
{
    int n;
    double a[10010];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%lf", &a[i]);

    double result = avg(a, n);

    printf("%0.7lf", result);

    return 0;
}