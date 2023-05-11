// Strings
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];
    int ln_a, ln_b;

    gets(a);
    gets(b);

    ln_a = strlen(a);
    ln_b = strlen(b);

    printf("%d %d\n", ln_a, ln_b);
    printf("%s%s\n", a, b);

    // Replacing.
    int r = a[0];
    a[0] = b[0];
    b[0] = r;

    printf("%s %s", a, b);
}