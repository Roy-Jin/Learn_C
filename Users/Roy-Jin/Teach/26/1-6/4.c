#include <stdio.h>
#include <math.h>

int main()
{
    int m, i, k;
    printf("Enten a mumber:  ");
    scanf("%d", &m);
    if (m < 2)
    {
        printf("%d is not a prime number\n", m);
        return 0;
    }
    k = sqrt(m);
    for (i = 2; i <= k; i++)
        if (m % i == 0)
            break;
    if (i > k)
        printf("%d is a prime number\n", m);
    else
        printf("%d is not a prime mumber\n", m);
    return 0;
}
