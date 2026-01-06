#include <stdio.h>
int main()
{
    for (int n = 2; n < 10000; n++)
    {
        int s = 0, i = 1;
        while (i <= n / 2)
        {
            if (n % i == 0)
                s += i;
            i++;
        }
        if (s == n)
            printf("%d\n", n);
    }

    return 0;
}