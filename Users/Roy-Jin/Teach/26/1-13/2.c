#include <stdio.h>
#include <math.h>

int main()
{
    int m, i, k, h = 0, leap = 1;
    printf("\n");
    for (m = 2; m <= 200; m++)
    {
        k = sqrt(m);
        for (i = 2; i <= k; i++)
            if (m % i == 0)
            {
                leap = 0;
                break;
            }
        if (leap)
        {
            printf("%-4d", m);
            h++;
            if (h % 5 == 0)
                printf("\n");
        }
        leap = 1;
    }
    return 0;
}
