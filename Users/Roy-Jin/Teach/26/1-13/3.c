#include <stdio.h>
int main()
{
    long a = 1, b = 1, c;
    int i;
    printf("%12ld%12ld", a, b);
    for (i = 3; i <= 40; i++)
    {
        c = a + b;
        printf("%12ld", c);
        if (i % 4 == 0)
        {
            printf("\n");
        }
        a = b;
        b = c;
    }
    if (40 % 4 != 0)
    {
        printf("\n");
    }
    return 0;
}
