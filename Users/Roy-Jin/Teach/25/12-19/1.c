#include <stdio.h>

int isPerfect(int n)
{
    if (n <= 1) return 0;

    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    for (int num = 2; num < 10000; num++)
    {
        if (isPerfect(num)) {
            printf("%d\n", num);
        }
    }
    return 0;
}