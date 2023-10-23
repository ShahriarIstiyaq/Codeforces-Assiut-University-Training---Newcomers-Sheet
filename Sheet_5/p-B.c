// Print.

#include <stdio.h>

int storeNum[1010];

void printNum(int num)
{
    for (int i = 1; i < num; i++)
        printf("%d ", i); // printing 1 to num-1 with space.

    printf("%d", num); // Printing num in the last position so that there are no extra space.
}

int main()
{
    int x;
    scanf("%d", &x);
    printNum(x);

    return 0;
}