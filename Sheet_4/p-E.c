// Count.
// If you want to conver any integer number into character than you have to add '0' with it.(the ascii value of 0 is 48, the intiger number will be added with 48 and then converted into it's character form.)
#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0, val;
    char str[1000000];
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        val = str[i] - 48;
        sum += val;
    }

    printf("%d", sum);
    return 0;
}