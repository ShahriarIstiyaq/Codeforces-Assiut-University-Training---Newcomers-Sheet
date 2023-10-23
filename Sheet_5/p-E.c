// Swap
#include <stdio.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    swap(&num1, &num2); // Sending the address to the pointers.

    printf("%d %d", num1, num2);
    return 0;
}