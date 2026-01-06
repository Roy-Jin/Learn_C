#include <stdio.h>

int main()
{
    int array[] = {52, 12, 51, 13, 19, 83, 8, 2};
    int k;
    int total = 0;
    for (k = 0; k < 8; k++)
    {
        if (array[k] % 2)
            break;
        total += array[k];
    }
    return total;
}

// Output: 64