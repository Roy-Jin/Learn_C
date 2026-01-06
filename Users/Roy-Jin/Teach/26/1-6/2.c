#include <stdio.h>
#include <math.h>

int main()
{
    int m, i, k, h = 0, leap = 1;
    printf("\n");
    for (m = 101; m <= 200; m++)
    {
        k = sqrt(m);
        for (i = 2; i <= k; i++)
            if (m % i == 0)
            {
                leap = 0;
                break;
            }
        if (leap) /*内循环结束后，leap依然为1，则m是素数*/
        {
            printf("%-4d", m);
            h++;
            if (h % 10 == 0)
                printf("\n");
        }
        leap = 1;
    }
    printf("\nThe total is %d", h);
    // system("pause"); 
}
