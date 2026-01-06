#include <stdio.h>

int main()
{
    int a[10];
    int n;
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    for (n = 2; n <= 8; n++)
        a[n + 1] = 2 * a[n] + a[n - 1] * a[n - 2];
    printf("%d\n", a[5]);
    return 0;
}

// Output: 28